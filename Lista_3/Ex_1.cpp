#include <iostream>

using namespace std;

int main()
{

    /*
    1. Faça um algoritmo que leia um nº inteiro e mostre uma mensagem indicando se este número é par ou ímpar, e se é positivo ou negativo.
    */

    int num;

    cout << "Digite um numero inteiro: ";
    cin >> num;

    if(num % 2 == 0)
    {
        cout << "Eh par\n";
        if (num>0)
        {
            cout << "Eh positivo";
        }
        else
        {
            cout << "Eh negativo";
        }
        
    }
    else
    {
        cout << "Eh impar\n";
        if (num>0)
        {
            cout << "Eh positivo";
        }
        else
        {
            cout << "Eh negativo";
        }
    }
    

    return 0;
}