#include <iostream>
using namespace std;

int main() {
    int n, i = 1;
    cout << "Ingresa un numero: ";
    cin >> n;
    while (i <= 10) {
        cout << n << " * " << i << " = " << n * i << endl;
        i++;
    }
    return 0;
}