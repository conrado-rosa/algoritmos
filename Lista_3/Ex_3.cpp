#include <iostream>

using namespace std;

int main()
{
    /*
    3. Elabore um algoritmo que dada a idade de um nadador classifica-o em uma das seguintes categorias: 
    infantil A = 5-7 anos
    infantil B = 8-10  anos
    juvenil A = 11-13 anos
    juvenil B = 14-17 anos
    adulto = 18 anos ou mais
    */

    int idade;

    cout << "Nadador, digite a sua idade: ";
    cin >> idade;

    bool infantilA = idade>=5 && idade<=7;
    bool infantilB = idade>=8 && idade<=10;
    bool juvenilA = idade>=11 && idade<=13;
    bool juvenilB = idade>=14 && idade<=17;
    bool adulto = idade>=18;


    if (infantilA)
    {
        cout << "Categoria: Infantil A";
    }
    else if (infantilB)
    {
        cout << "Categoria : Infantil B";
    }
    else if (juvenilA)
    {
        cout << "Categoria: Juvenil A";
    }
    else if (juvenilB)
    {
        cout << "Categoria: Juvenil B";
    }
    else if (adulto)
    {
        cout << "Categoria: Adulto";
    }
    else
    {
        cout << "Voce nao tem idade suficiente para ser um nadador.\nIdade minima: 5 anos";
    }
    
    
    

    return 0;
}