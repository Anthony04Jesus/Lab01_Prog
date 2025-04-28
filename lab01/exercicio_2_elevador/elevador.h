#ifndef ELEVADOR_H
#define ELEVADOR_H

class Elevador
{
private:

    int capacidade;
    int total_andares;
    int andar_atual;
    int pessoas_dentro;

public:

    Elevador(int andar_atual, int pessoas_dentro);

    void set_inicial();

    void entra();
    void sai();
    void sobe();
    void desce();

    int getAndar_Atual();
    int getPessoasDentro();
    int getEntrada_Saida();
    int getSubida_Descida();
    int getCapacidade();
    int getTotal_Andares();
};

#endif
