#include <iostream>

using namespace std;

int main()
{
    /*
    6. Uma  empresa  de  vendas  tem  três  corretores.  A  empresa  paga  ao  corretor  uma  comissão calculada de acordo com o valor de suas vendas.
    Se o valor da venda de  um  corretor  for  maior  que  R$  50.000.00  a  comissão  será  de  12%  do  valor  vendido.  
    Se  o  valor  da  venda  do  corretor  estiver  entre  R$  30.000.00  e  R$  50.000.00  (incluindo  extremos)  a  comissão  será  de  9.5%.  
    Em  qualquer  outro  caso,  a  comissão  será  de  7%.  
    Escreva  um  algoritmo  que  gere  um  relatório  contendo  nome,  valor  da  venda  e  comissão  de  cada  um  dos  corretores.  
    O  relatório deve mostrar também o total de vendas da empresa
    */

    string corretor1, corretor2, corretor3;
    double valor1, valor2, valor3, valorTotal;
    double comissao1, comissao2, comissao3;

    //Primeiro Corretor
    cout << "Digite o nome do primeiro corretor: ";
    cin >> corretor1;
    cout << "Digite o valor da venda dele: R$ ";
    cin >> valor1;
    cout << "Corretor 1 : Feito!\n\n";

    // Segundo Corretor
    cout << "Digite o nome do segundo corretor: ";
    cin >> corretor2;
    cout << "Digite o valor da venda dele: R$ ";
    cin >> valor2;
    cout << "Corretor 2 : Feito!\n\n";

    // Terceiro Corretor
    cout << "Digite o nome do terceiro corretor: ";
    cin >> corretor3;
    cout << "Digite o valor da venda dele: R$ ";
    cin >> valor3;
    cout << "Corretor 3 : Feito!\n\n";

    // Valor total das vendas
    valorTotal = valor1 + valor2 + valor3;

    cout << "====================================\n\n";

    if (valor1>50000)
    {
        comissao1 = valor1 * 0.12;
    }
        else if (valor1>=30000 && valor1<=50000)
        {
            comissao1 = valor1 * 0.095;
        }
            else
            {
                comissao1 = valor1 * 0.7;
            }
    
    if (valor2>50000)
    {
        comissao2 = valor2 * 0.12;
    }
        else if (valor2>=30000 && valor2<=50000)
        {
            comissao2 = valor2 * 0.095;
        }
            else
            {
                comissao2 = valor2 * 0.7;
            }    

    if (valor3>50000)
    {
        comissao3 = valor3 * 0.12;
    }
        else if (valor3>=30000 && valor3<=50000)
        {
            comissao3 = valor3 * 0.095;
        }
            else
            {
                comissao3 = valor3 * 0.7;
            }   
    
    cout << "Relatorio:\n";
    cout << "_________________________\n\n";

    cout << "Corretor 1: " << corretor1 << endl;
    cout << "Valor da venda: R$ " << valor1 << endl;
    cout << "Comissao do corretor: R$ " << comissao1 << endl << endl;

    cout << "Corretor 2: " << corretor2 << endl;
    cout << "Valor da venda: R$ " << valor2 << endl;
    cout << "Comissao do corretor: R$ " << comissao2 << endl << endl;

    cout << "Corretor 3: " << corretor3 << endl;
    cout << "Valor da venda: R$ " << valor3 << endl;
    cout << "Comissao do corretor: R$ " << comissao3 << endl << endl;

    cout << "Valor total de vendas: R$ " << valorTotal << endl;

    return 0;
}