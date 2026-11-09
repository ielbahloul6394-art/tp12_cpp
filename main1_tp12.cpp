
#include <iostream>
using namespace std;

class Vecteur2D {
private:
    double x;
    double y;

public:
    // Constructeur
    Vecteur2D(double a, double b) {
        x = a;
        y = b;
    }

    // Surcharge de l'operateur +
    Vecteur2D operator+(const Vecteur2D& v) {
        return Vecteur2D(x + v.x, y + v.y);
    }

    // Methode afficher
    void afficher() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Vecteur2D v1(2, 3);
    Vecteur2D v2(4, 5);

    Vecteur2D resultat = v1 + v2;

    cout << "Premier vecteur : ";
    v1.afficher();

    cout << "Deuxieme vecteur : ";
    v2.afficher();

    cout << "Resultat de l'addition : ";
    resultat.afficher();

    return 0;
}
