#include <iostream>

using namespace std;

int main()
{
    /*
    4. Um vendedor necessita de um algoritmo que calcule o preço total devido por um cliente. 
    O algoritmo deve receber o código de um produto e a quantidade comprada e calcular o preço total, usando a tabela abaixo:
    
    Código do Produto       Preço unitário
    1001                    R$ 5,32
    1324                    R$ 6,45
    6548                    R$ 2,37
    0987                    R$ 5,32
    7623                    R$ 6,45
    */

    float precoUnit, precoTotal;
    string codigo; 
    int quantidade;

    cout << "Digite o codigo do produto: ";
    cin >> codigo;

    if(codigo=="1001" || codigo=="1324" || codigo=="6548" || codigo=="0987" || codigo=="7623")
    {
        cout << "Digite a quantidade: ";
        cin >> quantidade;

        if (codigo=="1001")
        {
            precoTotal = 5.32 * quantidade;
            cout << "O preco total eh: " << "R$ " << precoTotal;
        }
        else if (codigo=="1324")
        {
            precoTotal = 6.45 * quantidade;
            cout << "O preco total eh: " << "R$ " << precoTotal;
        }
        else if (codigo=="6548")
        {
            precoTotal = 2.37 * quantidade;
            cout << "O preco total eh: " << "R$ " << precoTotal;
        }
        else if (codigo=="0987")
        {
            precoTotal = 5.32 * quantidade;
            cout << "O preco total eh: " << "R$ " << precoTotal;
        }
        else if (codigo=="7623")
        {
            precoTotal = 6.45 * quantidade;
            cout << "O preco total eh: " << "R$ " << precoTotal;
        }
        
    }
    else
    {
        cout << "Codigo errado!";
    }

    
    
    
    

    return 0;
}