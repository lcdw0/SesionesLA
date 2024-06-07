#include <iostream>
using namespace std;

int main ()
{
    int number = 99;
    cout << "Los numeros impares entre 1 y 100 en orden descendente son: ";
    while (number >= 1)
    {
        if (number % 2 != 0)
        {
            cout << number << " ";
        }
        number--;
    }
    cout << endl;
    return 0;
}