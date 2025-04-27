#include "carro.h"
// #include <iostream>
#include <string>
using namespace std;

Carro::Carro(int tanque_inicial)
{
    this->tanque_inicial = tanque_inicial;
};

void Carro::Abastecer(int gasolina)
{
    if ( ( tanque_inicial + gasolina ) <= tanque_max )
    {
        tanque = tanque_inicial + gasolina;
        abastecimento = true;
    }
    else
    {
        abastecimento = false;
    }
}

string Carro::getSituacaoAbastecimento()
{
    if (abastecimento)
    {
        return "Abastecimento completo! Tanque: " + to_string(tanque) + "L";
    }
    else
    {
        return "Abastecimento negado! Max 50L.";
    }
}

bool Carro::Mover_carro(int distancia)
{    
    if ((distancia / tanque) <= this->consumo)
    {
        distancia_total = distancia;
        litros_consumidos = distancia_total / consumo;
        tanque = tanque - litros_consumidos;
        return true;
    }
    else
    {
        distancia_total = tanque * consumo;
        distancia_restante = distancia - distancia_total;
        falta_gasolina = ((distancia / consumo) - (tanque));
        litros_consumidos = tanque;
        return false;
    }
}

int Carro::getDistanciaTotal()
{
    return distancia_total; // Retorna distancia total percorrida;
}

int Carro::getTanque()
{
    return tanque; // Tanque restante depois de mover carro;
}

int Carro::getLitrosConsumidos()
{
    return litros_consumidos; // Gasolina consumida no percurso
}

int Carro::getDistanciaRestante()
{
    return distancia_restante; // Gasolina consumida no percurso
}

int Carro::getGasFinishTrip()
{
    return falta_gasolina; // Gasolina consumida no percurso
}

