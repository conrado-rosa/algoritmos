#include <iostream>

using namespace std;

int main() 
{
    /*
    Considere a seguinte situação: descontam-se inicialmente 10% do salário bruto do trabalhador como contribuição à previdência social.
    Após esse desconto, há um outro desconto de 5% sobre o valor restante do salário bruto, a título de um determinado imposto.
    Faça um algoritmo que leia o salário bruto de um cidadão e imprima o seu salário líquido, além dos dois valores descontados
    */

    float salarioBruto;
    float previdencia, imposto;
    float posPrevidencia;
    float salarioLiquido;

    cout << "Digite seu salario bruto em reais: ";
    cin >> salarioBruto;

    previdencia = salarioBruto * 0.10;

    posPrevidencia = salarioBruto - previdencia;
    imposto = posPrevidencia * 0.05;

    salarioLiquido = posPrevidencia - imposto;

    cout << "Seu salario liquido eh: " << "R$ " << salarioLiquido;









    return 0;
}