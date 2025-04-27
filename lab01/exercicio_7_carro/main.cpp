#include "carro.h"
#include <iostream>
using namespace std;

string linha()
{
    return "==============================\n";
};

int main()
{
    int dist, abastecer, inicial_gas, continuar = 1;
    int loop = 1;

    while (continuar != 0)
    {
        cout << "--- " << loop << "a execucao --- " << endl;
        cout << "Gasolina inicial: ";
        cin >> inicial_gas;

        if (inicial_gas > 50)
        {
            cout << "Limite de 50L!!" << endl;
            loop += 1;
            continue;
        }

        Carro corolla(inicial_gas);

        cout << "Abasteca seu carro (L): ";
        cin >> abastecer;
        corolla.Abastecer(abastecer);

        cout << corolla.getSituacaoAbastecimento() << endl;

        cout << "Digite a distancia: ";
        cin >> dist;

        if (corolla.Mover_carro(dist))
        {
            cout << endl << "Tanque restante: " << corolla.getTanque() << " L" <<  endl;
        }
        else
        {
            cout << endl << "Carro ficou sem gasolina no meio do caminho!!!" << endl;
            cout << "Percurso restante: " << corolla.getDistanciaRestante() << " km de " << corolla.getDistanciaTotal()<< " km" << endl;
            cout << "Gasolina para terminar percurso: " << corolla.getGasFinishTrip() << " L"<< endl;
        }

        cout << "Distancia percorrida: " << corolla.getDistanciaTotal() << " km" << endl;
        cout << "Litros consumidos: " << corolla.getLitrosConsumidos() << " L" << endl;
        cout << linha();
        cout << "Continuar? 0/1: ";
        cin >> continuar;
        cout << linha();
        loop += 1;
    }
    cout << endl;
    return 0;
}
