#include <iostream>
using namespace std;

int main ()
{
    int number = 1;
    int sum = 0;
    while (number <= 100)
    {
        sum += number * number;
        number++;
    }
    cout << "La suma de los cuadrados de los numeros entre 1 y 100 es: " << sum << endl;
    return 0;
}