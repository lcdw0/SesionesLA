#include <iostream>
using namespace std;

int main() {
    int sumaPares = 0, numero = 100;

    while (numero <= 200) {
        if (numero % 2 == 0) {
            sumaPares += numero;
        }
        numero++;
    }

    cout << "La suma de los numeros pares entre 100 y 200 es: " << sumaPares << endl;

    return 0;
}