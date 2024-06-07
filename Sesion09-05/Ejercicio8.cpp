/* Escribe un programa que solicite al usuario ingresar 10 números enteros, los
almacene en un arreglo y luego cuente y muestre la cantidad de números pares
e impares.*/
#include <iostream>
using namespace std;

int main() {
    const int tamaño = 10;
    int numeros[tamaño];
    int pares = 0;
    int impares = 0;
    int contador = 0;

    cout << "Ingrese 10 numeros enteros:" << endl;

    while (contador < tamaño) {
        cout << "Numero " << contador + 1 << ": ";
        cin >> numeros[contador];

        if (numeros[contador] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }

        contador++;
    }

    cout << "Cantidad de numeros pares: " << pares << endl;
    cout << "Cantidad de numeros impares: " << impares << endl;

    return 0;
}