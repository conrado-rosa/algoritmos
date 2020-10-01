#include <iostream>

using namespace std;

int main()
{

    /*
    6. Faça um algoritmo que leia a velocidade de um veículo em km/h e calcule e imprima a velocidade em m/s (metros por segundo).
    */

    float kmPorHora, mPorSegundo;

    cout << "Insira a velocidade do veiculo em km/h: ";
    cin >> kmPorHora;

    mPorSegundo = kmPorHora / 3.6;

    cout << "O resultado eh: " << mPorSegundo << " m/s";



    return 0;
}