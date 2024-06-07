/*Escribe un programa que solicite al usuario ingresar la cantidad de calificaciones
que quiere promediar, luego ingrese esas calificaciones, las almacene en un
arreglo y calcule el promedio.*/

#include <iostream>
using namespace std;

int main() {
    int cantidadCalificaciones;
    cout << "Ingrese la cantidad de calificaciones a promediar: ";
    cin >> cantidadCalificaciones;

    int calificaciones[cantidadCalificaciones];
    int i = 0;
    int suma = 0;

    while (i < cantidadCalificaciones) {
        cout << "Ingrese la calificacion " << (i + 1) << ": ";
        cin >> calificaciones[i];
        suma += calificaciones[i];
        i++;
    }

    int promedio = suma / cantidadCalificaciones;
    cout << "El promedio de las calificaciones es: " << promedio << endl;

    return 0;
}