#include <iostream>

using namespace std;

int main()
{
    /*
    Dados três valores X, Y e Z, verificar se eles podem ser os comprimentos dos lados de
    um triângulo, e se forem, verificar se é um triângulo equilátero, isóscele ou escaleno. Se eles
    não formarem um triângulo, escrever uma mensagem. Antes da elaboração do algoritmo,
    torna-se necessário a revisão de algumas propriedades e definições de trigonometria:

    Propriedade: O comprimento de cada lado de um triângulo é menor do que a soma dos
    comprimentos dos outros dois lados.

    Definições:
        a. chama-se de triângulo equilátero o que tem os comprimentos dos três lados iguais;
    
        b. chama-se de triângulo isóscele o triângulo que tem os comprimentos de dois
        lados iguais;

        c. chama-se triângulo escaleno o triângulo que tem os comprimentos dos três
        lados diferentes. 
    */


    float X, Y, Z;
    int equilatero, isoscele, escaleno, naoTriangulo;

    cout << "Insira a primeira medida: ";
    cin >> X;
    cout << "Insira a segunda medida: ";
    cin >> Y;
    cout << "Insira a terceira medida: ";
    cin >> Z;

    naoTriangulo = (X <= 0 || Y <= 0 || Z <= 0);

    // equilátero o que tem os comprimentos dos três lados iguais
    equilatero = ((X == Y) && (X == Z) && (Y == Z));

    // isóscele o triângulo que tem os comprimentos de dois lados iguais
    isoscele = ((X == Y) || (X == Z) || (Y == Z));

    // escaleno o triângulo que tem os comprimentos dos três lados diferentes
    escaleno = ((X != Y) && (X != Z) && (Y != Z));
    

    if (naoTriangulo)
    {
        cout << "\nOs valores nao podem formar um triangulo!\n";
    }
    else if (equilatero)
    {
        cout << "Esse eh um triangulo equilatero!";
    }
    else if (isoscele)
    {
        cout << "Esse eh um triagulo isoscele!";
    }
    else if (escaleno)
    {
        cout << "Esse eh um triangulo escaleno!";
    }



    return 0;
}