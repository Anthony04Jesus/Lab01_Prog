#include "pessoa.h"
#include <string>

Pessoa::Pessoa()
{
    this->nome = "Desconhecido";
    this->idade = 0;
    this->altura = 0;
}

void Pessoa::setNome(string nome)
{
    this->nome = nome;
}

void Pessoa::setIdade(int idade)
{
    this->idade = idade;
}

void Pessoa::setAltura(double altura)
{
    this->altura = altura;
}

string Pessoa::getNome()
{
    return nome;
}

int Pessoa::getIdade()
{
    return idade;
}

double Pessoa::getAltura()
{
    return altura;
}

string Pessoa::imprimeDados()
{
    return "Nome: " + nome + " | Idade: " + to_string(idade) + " | Altura: " + to_string(altura);
}
