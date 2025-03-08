#include <iostream>
using namespace std;

class Triangulo {
private:
    int a, b, c;

public:
    Triangulo(int a, int b, int c) : a(a), b(b), c(c) {}

    string clasificar() {
        auto triangulo = [this]() {
            return (a + b > c) && (a + c > b) && (b + c > a);
        };

        if (!triangulo()) {
            return "No es un triángulo";
        }
        if (a == b && b == c) {
            return "Equilátero";
        }
        if (a == b || a == c || b == c) {
            return "Isósceles";
        }
        return "Escaleno";
    }
};

int main() {
    int a, b, c;
    cout << "Ingrese las longitudes de los lados (a, b, c): ";
    cin >> a >> b >> c;

    Triangulo triangulo(a, b, c);
    cout << triangulo.clasificar() << endl;

    return 0;
}