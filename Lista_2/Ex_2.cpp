#include <iostream>

using namespace std;

int main(){

    /*
    Faça um algoritmo que calcule a quantidade de litros de combustível gasta 
    em uma viagem, utilizando um automóvel que faz 12Km por litro.
    Para obter o cálculo, o usuário deve fornecer o tempo gasto na viagem e a velocidade média durante ela. 
    Desta forma, será possível obter a distância percorrida com a fórmula DISTANCIA = TEMPO * VELOCIDADE. 
    Tendo o valor da distância, basta calcular  a quantidadede litros de combustível utilizada
    na viagem com a fórmula: LITROS_USADOS = DISTANCIA / 12. O programa deve apresentar os valores 
    da velocidade média, tempo gasto na viagem, a distância percorrida e a quantidade de litros utilizada na viagem
    */

    float tempo, velocidade, distancia;
    int litrosUsados;

    //12km = 12000 metros
    //1km = 1000 metros
    //1h = 3600 segundos
    

    cout << "Digite o tempo gasto na viagem (em horas): ";
    cin >> tempo;

    cout << "Digite a velocidade media (em km): ";
    cin >> velocidade;

    cout << "_______________________________" << endl;

    distancia = tempo * velocidade;
    litrosUsados = distancia / 12;

    cout << "A velocidade media foi de " << velocidade << "km/h." << endl;
    cout << "O tempo gasto na viagem foi de " << tempo << " horas." << endl;
    cout << "A distancia foi de: " << distancia << "km." << endl;
    cout << "Foram usados " << litrosUsados << " litros de gasolina." << endl;


    






    return 0;
}