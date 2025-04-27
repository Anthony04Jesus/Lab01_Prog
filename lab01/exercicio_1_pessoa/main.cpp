#include <iostream>
#include "pessoa.h"
using namespace std;

int main()
{
    string nome;
    int idade;
    int continuar = 1;
    double altura;

    Pessoa();
    while (continuar != 0)
    {
        Pessoa cadastro;
        cout << "Seu nome: ";
        cin >> nome;
        cout << "Sua idade: ";
        cin >> idade;
        cout << "Sua altura: ";
        cin >> altura;
        cadastro.setNome(nome);
        cadastro.setIdade(idade);
        cadastro.setAltura(altura);
        cadastro.getNome();
        cadastro.getIdade();
        cadastro.getAltura();
        cout << cadastro.imprimeDados() << endl;
        cout << "==============================================" << endl;
        cout << "Continuar? 0 ou 1: ";
        cin >> continuar;
        cout << "==============================================" << endl;
    }
    return 0;
}
