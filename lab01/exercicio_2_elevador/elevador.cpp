#include "elevador.h"
#include <iostream>

using namespace std;

Elevador::Elevador(int capacidade, int total_andares)
{
    this->capacidade = capacidade;
    this->total_andares = total_andares;
}

void Elevador::set_inicial()
{
    this->pessoas_dentro = 0;
    this->andar_atual = 0;
}

int Elevador::getPessoasDentro()
{
    return pessoas_dentro;
}

void Elevador::entra()
{
    this->pessoas_dentro = this->pessoas_dentro + 1;
}

void Elevador::sai()
{
    this->pessoas_dentro = this->pessoas_dentro - 1;
}

int Elevador::getAndar_Atual()
{
    return andar_atual;
}

void Elevador::sobe()
{
    this->andar_atual = this->andar_atual + 1;
}

void Elevador::desce()
{
    this->andar_atual = this->andar_atual - 1;
}

int Elevador::getEntrada_Saida()
{
    return this->pessoas_dentro;
}

int Elevador::getSubida_Descida()
{
    return this->andar_atual;
}

int Elevador::getCapacidade()
{
    return this->capacidade;
}

int Elevador::getTotal_Andares()
{
    return this->total_andares;
}
