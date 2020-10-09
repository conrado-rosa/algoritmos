#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    /*
    10. Um usuário deseja um algoritmo pelo qual possa escolher que tipo de média deseja
    calcular a partir de três notas. Faça um algoritmo que leia as notas, a opção escolhida
    pelo usuário e calcule a média: 1 - aritmética 2 - ponderada (pesos 3, 3, 4)
    */

    int nota1, nota2, nota3;
    int media;
    int aritmetica, ponderada;

    cout << "Digite a primeira nota: ";
    cin >> nota1;
    cout << "Digite a segunda nota: ";
    cin >> nota2;
    cout << "Digite a terceira nota: ";
    cin >> nota3;

    aritmetica = (nota1+nota2+nota3)/3;
    ponderada = (3*nota1 + 3*nota2 + 4*nota3)/10;

    cout << "\nQual media voce deseja calcular? " << endl;
    cout << "1 - Aritmetica" << endl;
    cout << "2 - Ponderada" << endl;
    cout << ":";
    cin >> media;

    // Se for Aritmetica
    if (media==1)
    {
        cout << "Media aritmetica: " << aritmetica;
    }
    // Se for Ponderada
    else if (media==2)
    {
        cout << "Media ponderada: " << ponderada;
    }
    else
    {
        cout << "Valor invalido. Fechando o programa.";
    }



    return 0;
}