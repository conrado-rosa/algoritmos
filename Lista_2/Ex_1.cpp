#include <iostream>
#include <cmath>

using namespace std;

int main() {
    /*1.Escreva programas que resolvam as seguintes expressões matemáticas (solicite ao usuáriopara entrar com os valores necessários para o 
    cálculo) 
    */

    int A, B, C;
    int resultado1;

    
    //a.(A + B)*C
    cout << "Questao a) " << endl;
    cout << "Digite o numero A: ";
    cin >> A;

    cout << "Digite o numero B: ";
    cin >> B;

    cout << "Digite o numero C: ";
    cin >> C;

    resultado1 = (A + B)*C;


    cout << "O resultado do calculo a) eh: " << resultado1 << endl;
    cout << "________________" << endl;


    //========================================================================
    

    int D, E;
    int resultado2;

    //b. A -B(C + D2)/E
    cout << "Questao b) " << endl;
    cout << "Digite o numero A: ";
    cin >> A;

    cout << "Digite o numero B: ";
    cin >> B;

    cout << "Digite o numero C: ";
    cin >> C; 

    cout << "Digite o numero D: ";
    cin >> D;

    cout << "Digite o numero E: ";
    cin >> E;

    resultado2 = A-B*(C + D*D)/E;

    cout << "O resultado do calculo b) eh: " << resultado2 << endl;
    cout << "________________" << endl;


    //========================================================================

    int base, expoente;
    int resultado3;

    //c. base^expoente
    cout << "Questao c) " << endl;
    cout << "Digite o num. base: ";
    cin >> base;

    cout << "Digite o num. expoente: ";
    cin >> expoente;

    resultado3 = pow(base, expoente);

    cout << "O resultado do calculo c) eh: " << resultado3 << endl;
    cout << "________________" << endl;

    //========================================================================

    int a, b, c;
    int resultado4;

    // d. a * b^c
    cout << "Questao d) " << endl;
    cout << "Digite o numero a: ";
    cin >> a;

    cout << "Digite o numero b: ";
    cin >> b;

    cout << "Digite o expoente c: ";
    cin >> c;

    resultado4 = a*pow(b, c);

    cout << "O resultado do calculo d) eh: " << resultado4 << endl;
    cout << "________________" << endl << endl;






    cout << "FIM DO PROGRAMA!";





    return 0;
}