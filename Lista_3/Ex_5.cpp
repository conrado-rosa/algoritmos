#include <iostream>

using namespace std;

int main()
{
    /*
    5. Escrever um algoritmo que lê um conjunto de 4 valores i, a, b, c, onde i é um valor inteiro e positivo e 
    a, b, c, são quaisquer valores reais e os escreva. Após: 
        
        a. Se i=1 escrever os três valores a, b, c em ordem crescente. 
        b. Se i=2 escreveros três valores a, b, c em ordem decrescente. 
        c. Se i=3 escrever os três valores a, b, c de forma que o maior entre a, b, c fique dentre os dois.
    */

    int i;
    float a, b, c;

    cout << "Digite i: ";
    cin >> i;
    cout << "Digite tres numeros: ";
    cin >> a >> b >> c;

    if (i==1)
    {
        cout << "\nOrdem crescente: ";

        if (a>b && a>c && b>c)
        {
            cout << c << " " << b << " " << a;
        }
        else if (a > b && a > c && c > b)
        {
            cout << b << " " << c << " " << a;
        }

        else if ( b > a && b > c && a > c)
        {
            cout << c << " " << a << " " << b;
        }

        else if ( b > a && b > c && c > a)
        {
            cout << a << " " << c << " " << b;
        }

        else if ( c > a && c > b && b > a)
        {
            cout << a << " " << b << " " << c;    
        }

        else if ( c > a && c > b && a > b)
        {
            cout << b << " " << a << " " << c;
        }
    }
    if (i==2)
    {
        cout << "\nOrdem decrescente: ";

        if (a < b && a < c && b < c)
        {
            cout << c << " " << b << " " << a;
        }

        else if (a < b && a < c && c < b){
            cout << b << " " << c << " " << a;
        }

        else if ( b < a && b < c && a < c){
            cout << c << " " << a << " " << b;
        }

        else if ( b < a && b < c && c < a){
            cout << a << " " << c << " " << b;
        }

        else if ( c < a && c < b && b < a){
            cout << a << " " << b << " " << c;
        }

        else if ( c < a && c < b && a < b){
            cout << b << " " << a << " " << c;
        }
    }

    if (i==3)
    {

        cout << "\nMaior no meio: ";

        if (a < b && a < c && b < c)
        {
            cout << b << " " << c << " " << a;
        }

        else if (a < b && a < c && c < b)
        {
            cout << c << " " << b << " " << a;
        }

        else if ( b < a && b < c && a < c)
        {
            cout << a << " " << c << " " << b;
        }

        else if ( b < a && b < c && c < a)
        {
            cout << c << " " << a << " " << b;
        }

        else if ( c < a && c < b && b < a)
        {
            cout << b << " " << a << " " << c;
        }

        else if ( c < a && c < b && a < b)
        {
            cout << a << " " << b << " " << c;
        }

    }
    

    return 0;
}