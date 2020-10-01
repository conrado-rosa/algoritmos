#include <iostream>

using namespace std;

int main()
{

    /*
    9.O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor e dos impostos 
    (aplicados ao custo de fábrica). Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45%, escrever 
    um algoritmo que leia o custo de fábrica de um carro e escreva o custo ao consumidor.
    */

   // 28% + 45% = 73%

   float custoFabrica;
   float percentagem;
   float custoConsu;

    cout << "Digite o custo de fabrica: ";
    cin >> custoFabrica;

    percentagem = custoFabrica * 0.73;
    custoConsu = custoFabrica + percentagem;

    cout << "Custo ao consumidor: R$ " << custoConsu;

    return 0;
}