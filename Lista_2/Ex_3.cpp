#include <iostream>

using namespace std;

int main(){

    /*
    3. Faça um algoritmo que leia quatro números e apresente os resultados de adição e multiplicação  dos valores entre si,
    baseando-se na utilização da propriedade distributiva, ou seja, se forem lidas as variáveis A, B, C e D, 
    devem ser somadas e multiplicadas A com B, A com C e A com D; B com C, B com D e por último C com D;
    */

    int A, B, C, D;

    cout << "Digite o numero A: ";
    cin >> A;
    cout << "Digite o numero B: ";
    cin >> B;
    cout << "Digite o numero C: ";
    cin >> C;
    cout << "Digite o numero D: ";
    cin >> D;

    cout << "\nSomas a)" << endl;
    cout << "           A + B = " << A+B << endl;
    cout << "           A + C = " << A+C << endl;
    cout << "           A + D = " << A+D << endl << endl;

    cout << "Somas b)" << endl;
    cout << "           B + C = " << B+C << endl;
    cout << "           B + D = " << B+D << endl;
    cout << "           C + D = " << C+D << endl << endl;

    cout << "=============================" << endl << endl;

    cout << "Mult. a)" << endl;
    cout << "           A * B = " << A*B << endl;
    cout << "           A * C = " << A*C << endl;
    cout << "           A * D = " << A*D << endl << endl;

    cout << "Mult.  b)" << endl;
    cout << "           B * C = " << B*C << endl;
    cout << "           B * D = " << B*D << endl;
    cout << "           C * D = " << C*D << endl << endl;





    return 0;
}