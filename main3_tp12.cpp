
#include <iostream>
#include <stdexcept>
using namespace std;

class Tableau {
private:
    int* data;
    int taille;

public:
    // Constructeur
    Tableau(int t) {
        taille = t;
        data = new int[taille];

        for (int i = 0; i < taille; i++) {
            data[i] = 0;
        }
    }

    // Surcharge de l'operateur []
    int& operator[](int indice) {
        if (indice < 0 || indice >= taille) {
            throw out_of_range("Indice invalide !");
        }
        return data[indice];
    }

    // Destructeur
    ~Tableau() {
        delete[] data;
    }
};

int main() {
    try {
        Tableau tab(5);

    *
        tab[0] = 10;
        tab[1] = 20;
        tab[2] = 30;
        tab[3] = 40;
        tab[4] = 50;

        
        cout << "Contenu du tableau :" << endl;

        for (int i = 0; i < 5; i++) {
            cout << tab[i] << " ";
        }

        cout << endl;

        
        cout << tab[6] << endl;

    } catch (const out_of_range& e) {
        cout << "Erreur : " << e.what() << endl;
    }

    return 0;
}
