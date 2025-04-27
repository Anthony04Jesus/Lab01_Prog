#ifndef PESSOA_H
#define PESSOA_H

#include <string>

using namespace std;

class Pessoa
{
private:

    string nome;
    int idade;
    double altura;

public:

    Pessoa();

    void setNome(string nome);
    void setIdade(int idade);
    void setAltura(double altura);

    string getNome();
    int getIdade();
    double getAltura();

    string imprimeDados();
};

#endif
