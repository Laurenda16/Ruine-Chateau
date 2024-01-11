#include "menuJeu.h"


void menuJeu::execute()
{
    std::cout << "\e[?25h"; // Restaure le curseur clignotant dans la console
    auto choix = choixMenu();
    while (choix != 4)
    {
        switch (choix)
        {
            case 1 : commencerPartie(); break;
            case 2 : creerTerrain(); break;
            case 3 : modifierTerrain(); break;
        }
        choix = choixMenu();
    }
}

int menuJeu::choixMenu()
{
    int choix {-1};
    do
    {
        cout<<"########################\n";
        cout<<"###RUINES DE CHATEAU####\n";
        cout<<"########################\n";
        cout<<"\nBienvenue, voulez-vous :\n";
        cout<<"(1) Commencer une partie\n";
        cout<<"(2) Creer un terrain\n";
        cout<<"(3) Modifier un terrain\n";
        cout<<"(4) Quitter le jeu\n";
        cout<<"Votre choix : ";
        cin>>choix;
    }
    while (choix < 0 || choix > 4);
    return choix;
}

void menuJeu::afficherTerrains()
{
    cout << "Liste des terrains sauvegardes :\n";

    DIR* dir = opendir(cheminDossier);
    if (dir) {
        struct dirent* entry;
        while ((entry = readdir(dir)) != nullptr) {
            // Ignorer les entr es sp ciales "." et ".."
            if (strcmp(entry->d_name, ".") != 0 && strcmp(entry->d_name, "..") != 0) {
                printf("%s\n", entry->d_name);
                fichiers.push_back(entry->d_name);
            }
        }
        closedir(dir);
    }

    // V rifier s'il y a des fichiers
    if (fichiers.empty()) {
        cout << "Pas de terrains crees.\n\n";
        return;
    } else {
        bool fichierTrouve = false;

        // Demander   l'utilisateur de choisir un fichier
        while (!fichierTrouve) {
            cout << "Entrez le nom du fichier du terrain souhaite : ";
            cin >> nomFichier;

            // V rifier si le fichier existe dans la liste
            if (std::find(fichiers.begin(), fichiers.end(), nomFichier) != fichiers.end()) {
                fichierTrouve = true;
            } else {
                cout << "Fichier non valide. Veuillez reessayer.\n";
            }
        }
    }
}

void menuJeu::verificationFin()
{
    if (destination == 'X') {
        // Le joueur a l'amulette
        ramasseAmulette = true;
    }
    else if (destination == '#') {
        // Le joueur touche un mur
        if (ramasseAmulette) {
            // Le joueur a l'amulette, il gagne
            cout << "\n\nFelicitations ! Vous avez gagne en sortant du chateau avec l'amulette.\n" << endl;
            quitter = true;
            std::cout << "\e[?25h"; // Restaure le curseur clignotant dans la console
        }
    }
}

void menuJeu::commencerPartie()
{
    quitter = false;
    ramasseAmulette = false;

    afficherTerrains();

    terrain t{0, 0};

    if (t.chargerTerrain(cheminDossier + nomFichier))
    {
        // Effacer tout le contenu de la console, sauf le terrain
        system("cls");

        cout << "Touches de deplacement : zqsd\n";
        cout << "'@' represente l'aventurier, 'M' les monstres et 'X' l'amulette\n";
        cout << "Recuperez l'amulette et sortez du chateau (touchez un mur) pour gagner la partie\n\n";

        t.afficherTerrain();

        cout << "\nAppuyer sur echap pour quitter\n";

        int posX = 1; // Aventurier initialement en position 1,1
        int posY = 1;

        while (!quitter)
        {
            cout << "\e[?25l"; // Masque le curseur clignotant dans la console

            char input = _getch();

            epee ep {10};
            armure arm {10};
            aventurier a {20,20,1,1,ep,arm,true};

            switch (input)
            {
                case 27: // Appui sur  echap, quitte le jeu et revient au menu
                    cout << endl;
                    execute();
                    quitter = true;
                    break;

                case 'z': // Déplacement vers le haut
                    if (posX > 0) {
                        destination = t.getTerrain()[posX - 1][posY];
                        if (destination == '.' || destination == 'X') {
                            t.deplacerPersonnage(a, posX - 1, posY);
                            posX = posX - 1;
                        }
                        verificationFin();
                    }
                    break;

                case 's': // Déplacement vers le bas
                    if (posX < t.largeur() - 1) {
                        destination = t.getTerrain()[posX + 1][posY];
                        if (destination == '.' || destination == 'X') {
                            t.deplacerPersonnage(a, posX + 1, posY);
                            posX = posX + 1;
                        }

                        verificationFin();
                    }
                    break;

                case 'q': // Déplacement vers la gauche
                    if (posY > 0) {
                        destination = t.getTerrain()[posX][posY - 1];
                        if (destination == '.' || destination == 'X') {
                            t.deplacerPersonnage(a, posX, posY - 1);
                            posY = posY - 1;
                        }

                        verificationFin();
                    }
                    break;

                case 'd': // Déplacement vers la droite
                    if (posY < t.hauteur() - 1) {
                        destination = t.getTerrain()[posX][posY + 1];
                        if (destination == '.' || destination == 'X') {
                            t.deplacerPersonnage(a, posX, posY + 1);
                            posY = posY + 1;
                        }

                        verificationFin();
                    }
                    break;

                default:
                    // Gérer les autres touches ici si nécessaire
                    break;
            }
            // Ajoute une pause de 100 millisecondes pour  viter le d placement trop rapide
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }
    }
}

void menuJeu::creerTerrain()
{
    terrain t{0,0};
    t.definirTerrain();

    cout << endl;

    string nomFichier;

    cout << "Entrez le nom du fichier pour sauvegarder le terrain : ";
    cin >> nomFichier;

    t.sauvegarderTerrain(nomFichier);
}

void menuJeu::modifierTerrain()
{
    afficherTerrains();

    terrain t{0, 0};

    if (t.chargerTerrain(cheminDossier + nomFichier)) {
        // Afficher le terrain actuel
        cout << "\nTerrain actuel :\n";
        t.afficherTerrain();

        cout << '\n';

        t.definirTerrain();

        // Ouvrir le fichier en mode std::ofstream::out | std::ofstream::trunc pour vider son contenu
        std::ofstream fichier(cheminDossier + nomFichier, std::ofstream::out | std::ofstream::trunc);

        // V rifier si l'ouverture du fichier a r ussi
        if (fichier.is_open()) {
            // Sauvegarder le terrain modifi  dans le fichier existant
            t.sauvegarderTerrain(nomFichier);

            cout << "Terrain modifie et sauvegarde avec succes.\n";
        } else {
            cout << "Erreur lors de l'ouverture du fichier pour la sauvegarde.\n";
        }
    }
}
