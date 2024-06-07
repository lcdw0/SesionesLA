#include <iostream>
using namespace std;

int main() {
    int longitudVector;
    int i = 0;

    cout << "Ingrese la longitud de los vectores: ";
    cin >> longitudVector;

    int vector1[longitudVector];
    int vector2[longitudVector];
    int productoPunto = 0;

    cout << "Ingrese los elementos del vector 1:" << endl;
    while (i < longitudVector) {
        cin >> vector1[i];
        i++;
    }

    i = 0;
    cout << "Ingrese los elementos del vector 2:" << endl;
    while (i < longitudVector) {
        cin >> vector2[i];
        i++;
    }

    i = 0;
    while (i < longitudVector) {
        productoPunto += vector1[i] * vector2[i];
        i++;
    }

    cout << "El producto punto de los dos vectores es: " << productoPunto << endl;

    return 0;
}