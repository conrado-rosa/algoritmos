#include <iostream>

using namespace std;

int main()
{
    /*
    9. Elaborar um algoritmo que lê dois valores a e b e os escreve com a mensagem: “São múltiplos” ou “Não são múltiplos”.
    */

    int a, b;
    int multiplos;

    cout << "Insira a): ";
    cin >> a;
    cout << "Insira b): ";
    cin >> b;

    multiplos = (a % b == 0 || b % a == 0);

    if (multiplos)
    {
        cout << "Sao multiplos";
    }
    else
    {
        cout << "Nao sao multiplos";
    }
    

    return 0;
}