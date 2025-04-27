#ifndef CARRO_H
#define CARRO_H
#include <iostream>
using namespace std;

class Carro
{
private:

    int tanque = 0;
    int consumo = 15;
    int gasolina = 0;
    int tanque_max = 50;
    int tanque_inicial = 0;
    int falta_gasolina = 0;
    int distancia_total = 0;
    int litros_consumidos = 0;
    int distancia_restante = 0;
    bool abastecimento = false;

public:

    Carro(int tanque_inicial);
    void Abastecer(int gasolina);
    bool Mover_carro(int distancia);

    string getSituacaoAbastecimento();
    int getLitrosConsumidos();
    bool getSituacaoViagem();
    int getDistanciaRestante();
    int getGasFinishTrip();
    int getDistanciaTotal();
    int getTanque();
};

#endif
