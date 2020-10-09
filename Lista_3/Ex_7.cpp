#include <iostream>

using namespace std;

int main()
{
    /*
    7. Escreva um algoritmo que, para uma conta bancária, leia o seu número, o saldo, 
    o tipo de operação a ser realizada (depósito ou retirada) e o valor da operação. 
    Após, determine e mostre o novo saldo. Se o novo saldo ficar negativo, deve ser mostrada, também, a mensagem “conta estourada”
    */

    int numero;
    double saldoAtual;
    double valorOperacao;
    double novoSaldo;

    cout << "Banco Algorit\n\n";

    cout << "Informe o numero da sua conta: ";
    cin >> numero;
    cout << "Informe o seu saldo atual: R$ ";
    cin >> saldoAtual;
    cout << "Informe o tipo de operacao: " << endl;
    cout << "1 - Deposito" << endl;
    cout << "2 - Saque" << endl;
    cout << "= ";
    cin >> numero;
    cout << "Informe o valor da operacao: R$ ";
    cin >> valorOperacao;

    if (numero == 1)
    {
        novoSaldo = (saldoAtual + valorOperacao);
        cout << "O seu novo saldo eh: R$ " << novoSaldo;
    }
    else
    {
        novoSaldo = (saldoAtual - valorOperacao);
        cout << "O seu novo saldo eh: R$ " << novoSaldo;
        if (novoSaldo < 0)
        {
            cout << "Conta estourada";
        }
        
    }

    return 0;
}