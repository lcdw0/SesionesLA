#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int i = 0, cont = 0;
    while(i < 300)
    {
        cont ++;
        if(cont % 2 == 0)
        {
            i ++;
            cout << cont << " " << i << endl;
        }
    }
    return 0;
}
