#include <iostream>
using namespace std;

int main ()
{
    int sumaNotas = 0;

    int contador = 1;

    while (contador <= 10)
    {
        cout << "Ingrese la nota del estudiante " << contador << ": ";

        int nota;
        cin >> nota;

        if (nota < 0 || nota > 100)
        {
            cout << "La nota debe estar entre 0 y 100. Intente de nuevo." << endl;
            continue;
        }

        sumaNotas += nota;

        contador++;
    }

    int promedioNotas = sumaNotas / 10;

    cout << "El promedio general de la seccion es: " << promedioNotas << endl;
    return 0;
}