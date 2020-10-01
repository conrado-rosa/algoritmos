#include <iostream>

using namespace std;

int main()
{
    /*
    4.Faça um algoritmo que leia os valores de COMPRIMENTO, LARGURA e ALTURA e apresente o valor do volume de uma caixa retangular
    */

    int comprimento, largura, altura;
    int volume;

    //Digitar o valor em metros

    cout << "Esse programa calcula o volume de uma caixa retangular!!!" << endl << endl;

    cout << "Digite o comprimento: ";
    cin >> comprimento;
    cout << "Digite a largura: ";
    cin >> largura;
    cout << "Digite a altura: ";
    cin >> altura;

    volume = comprimento * largura * altura;

    cout << "O volume da caixa eh: " << volume << " metros.";

    return 0;
}