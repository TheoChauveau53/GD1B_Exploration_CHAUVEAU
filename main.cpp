#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*               EXO 1
int main()
{
    bool end = false;
    while (end == false) {
        string choix;
        cout << "Ou voulez-vous aller?" << "\n";
        cout << "choix 1 = Arte" << "\n";
        cout << "choix 2 = ETPA" << "\n";
        cin >> choix;

        if (choix == "1") {
            cout << "Vous �tes � Arte";
            end = true;
        }
        else if (choix == "2") {
            cout << "Vous �tes � l'ETPA";
            end = true;
        }
        else {
            cout << "R�pondez par 1 ou 2";
        }
    }
}
*/

//         EXO 2
int main()
{
    bool end = false;
    while (end == false) {
        string choix;
        cout << "Ou voulez-vous aller?" << "\n";
        cout << "Arte ou ETPA sont disponibles" << "\n";
        cin >> choix;

        if (choix == "Arte") {
            cout << "Vous �tes � Arte";
            end = true;
        }
        else if (choix == "ETPA") {
            cout << "Vous �tes � l'ETPA";
            end = true;
        }
        else {
            cout << "Seulement Arte et ETPA sont disponibles";
        }
    }
}


/*      EXO 3
class Lieu {
protected:
    string name;
    string description;
    int difficulte;

public:
    Lieu()
    {
        name = "";
        description = "";
        difficulte = 0;
    }
    Lieu(string n, string d, int diff)
    {
        name = n;
        description = d;
        difficulte = diff;
    }
};

int main()
{
    int choix;
    cout << "Ou voulez-vous aller?";
    cin >> choix;

    if (choix == 1) {
        cout << "Vous �tes � lieu 1";
    }
    if (choix == 2) {
        cout << "Vous �tes � lieu 2";
    }

    Lieu lieu1("Arte","C'est cool",1);
}
*/