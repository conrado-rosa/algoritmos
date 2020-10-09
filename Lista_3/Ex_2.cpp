#include <iostream>

using namespace std;

int main()
{
    /*
    2. Escreva um algoritmo que leia 3 números inteiros e mostre o maior deles.
    */

    int a, b, c;

    cout << "Digite 3 numeros inteiros: ";
    cin >> a >> b >> c;

    if(a>b && a>c)
    {
        cout << "O maior numero eh: " << a;
    }
    else if (b>a && b>c)
    {
        cout << "O maior numero eh: " << b;
    }
    else if (c>a && c>b)
    {
        cout << "O maior numero eh: " << c;
    }
    else
    {
        cout << "O maior numero eh: " << a;
    }
    
    

    return 0;
}