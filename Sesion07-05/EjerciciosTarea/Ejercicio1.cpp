#include <iostream>
using namespace std;

int main ()
{
    int n, s = 0;
    cout<<"Introduce un natural n: ";
    cin>>n;

    while(n<=0)
    {
        cout<<"Dame un numero correcto: ";
        cin>>n;
    }

    while(n > 0)
    {
        s = s + n;
        n--;
    }

    cout<<"La suma de los N primeros numeros naturales es: "<< s <<endl;

    return 0;
}