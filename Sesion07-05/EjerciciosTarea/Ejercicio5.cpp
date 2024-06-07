#include <iostream>
using namespace std;

int main() {
    int i = 0, estudiantesAprobados = 0, estudiantesReprobados = 0, notaEstudiante = 0, totalNotas = 0;

    while (i < 8) {
        cout << "Ingrese la nota del estudiante " << i+1 << ": ";
        cin >> notaEstudiante;

        if (notaEstudiante >= 70) {
            estudiantesAprobados++;
        } else {
            estudiantesReprobados++;
        }
        totalNotas += notaEstudiante;

        i++;
    }

    int promedioGeneral = totalNotas / 8;
    cout << "Cantidad de estudiantes aprobados: " << estudiantesAprobados << endl;
    cout << "Cantidad de estudiantes reprobados: " << estudiantesReprobados << endl;
    cout << "Promedio general: " << promedioGeneral << endl;

    return 0;
}