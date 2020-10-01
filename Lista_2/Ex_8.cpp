#include <iostream>

using namespace std;

int main()
{
    /*
    8.Faça um algoritmo que leia o tempo de duração de um evento em uma fábrica expressa em segundos e mostre-o expresso em horas, minutos e segundos.
    */

    float segundos, minutos, horas;

    cout << "Insira a duracao do evento em segundos: ";
    cin >> segundos;

    minutos = segundos / 60;
    horas = segundos / 3600;

    cout << "Duracao do evento: " << segundos << " segundos ou " << minutos << " minutos ou " << horas << " horas.";



    return 0;
}