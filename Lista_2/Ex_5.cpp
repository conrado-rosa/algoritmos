#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    /*
    5.Faça um algoritmo que leia dois valores inteiros (A e B) e apresente o resultado da soma do quadrado de cada valor lido
    */

    int A, B;
    int resultado;

    cout << "Digite A: ";
    cin >> A;
    cout << "Digite B: ";
    cin >> B;

    resultado = pow(A, 2) + pow(B, 2);

    cout << "O resultado da soma do quadrado de cada valor eh: " << resultado;

    return 0;
}