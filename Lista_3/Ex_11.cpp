#include <iostream>

using namespace std;

int main()
{
    /*
    11. Crie um algoritmo chamado Zodiaco. Este algoritmo deve ler a data do seu aniversário e
    atribuir um valor para a variável inteira chamada signo, conforme lista abaixo:
    a. 1o signo do zodíaco: Aquário (21/jan a 19/fev)
    b. 2o signo do zodíaco: Peixes (20/fev a 20/mar)
    c. 3o signo do zodíaco: Áries (21/mar a 20/abr)
    d. 4o signo do zodíaco: Touro (21/abr a 20/mai)
    e. 5o signo do zodíaco: Gêmeos (21/mai a 20/jun)
    f. 6o signo do zodíaco: Câncer (21/jun a 21/jul)
    g. 7o signo do zodíaco: Leão (22/jul a 22/ago)
    h. 8o signo do zodíaco: Virgem (23/ago a 22/set)
    i. 9o signo do zodíaco: Libra (23/set a 22/out)
    j. 10o signo do zodíaco: Escorpião (23/out a 21/nov)
    k. 11o signo do zodíaco: Sagitário (22/nov a 21/dez)
    l. 12o signo do zodíaco: Capricórnio (22/dez a 20/jan)
    O algoritmo deve imprimir uma mensagem, como o exemplo: "Você é do seguinte signo
    do zodíaco: Libra"
    */

    int dia, mes;
    int aquario, peixes, aries, touro, gemeos, cancer, leao, virgem, libra, escorpiao, sagitario, capricornio;

    cout << "Bem-vindo ao programa Zodiaco!" << endl;
    cout << "Digite o dia de seu nascimento: ";
    cin >> dia;
    cout << "Digite o mes de seu nascimento: ";
    cin >> mes;

    aquario = ((dia>=21 && mes==1) || (dia<=19 && mes==2));
    peixes = ((dia>=20 && mes==2) || (dia<=20 && mes==3));
    aries = ((dia>=21 && mes==3) || (dia<=20 && mes==4));
    touro = ((dia>=21 && mes==4) || (dia<=20 && mes==5));
    gemeos = ((dia>=21 && mes==5) || (dia<=20 && mes==6));
    cancer = ((dia>=21 && mes==6) || (dia<=21 && mes==7));
    leao = ((dia>=22 && mes==7) || (dia<=22 && mes==8));
    virgem = ((dia>=23 && mes==8) || (dia<=22 && mes==9));
    libra = ((dia>=23 && mes==9) || (dia<=22 && mes==10));
    escorpiao = ((dia>=23 && mes==10) || (dia<=21 && mes==11));
    sagitario = ((dia>=22 && mes==11) || (dia<=21 && mes==12));
    capricornio = ((dia>=22 && mes==12) || (dia<=20 && mes==1));

    if (aquario)
    {
        cout << "Voce eh do seguinte signo do zodiaco: Aquario" << endl;
    }
        else if (peixes)
        {
            cout << "Voce eh do seguinte signo do zodiaco: Peixes" << endl;
        }
        else if (aries)
        {
            cout << "Voce eh do seguinte signo do zodiaco: Aries" << endl;
        }
        else if (touro)
        {
            cout << "Voce eh do seguinte signo do zodiaco: Touro" << endl;
        }
        else if (gemeos)
        {
            cout << "Voce eh do seguinte signo do zodiaco: Gemeos" << endl;
        }
        else if (cancer)
        {
            cout << "Você eh do seguinte signo do zodiaco: Cancer" << endl;
        }
        else if (leao)
        {
            cout << "Voce eh do seguinte signo do zodiaco: Leao" << endl;
        }
        else if (virgem)
        {
            cout << "Voce eh do seguinte signo do zodiaco: Virgem" << endl;
        }
        else if (libra)
        {
            cout << "Voce eh do seguinte signo do zodiaco: Libra" << endl;
        }
        else if (escorpiao)
        {
            cout << "Voce eh do seguinte signo do zodiaco: Escorpiao" << endl;
        }
        else if (sagitario)
        {
            cout << "Voce eh do seguinte signo do zodiaco: Sagitario" << endl;
        }
        else if (capricornio)
        {
            cout << "Voce eh do seguinte signo do zodiaco: Capricornio" << endl;
        }
    else
    {
        cout << "Erro: Voce digitou uma data que nao existe!" << endl;
    }
       
    return 0;
}