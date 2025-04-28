#include "elevador.h"
#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int decisao = 1;
    int sobe_desce, entra_sai = 0;

    Elevador monday(8, 12);

    monday.set_inicial();

    cout << "Capacidade do elevador: " << monday.getCapacidade() << endl;
    cout << "Pessoas no elevador: " << monday.getEntrada_Saida() << endl;

    while (decisao != 0)
    {
        cout << "Sai (0) ou entra (1): ";
        cin >> entra_sai;

        if (entra_sai == 0)
        {
            if (monday.getPessoasDentro() != 0)
            {
                monday.sai();
            }
            else
            {
                cout << "Erro: Elevador já está vazio!" << endl;
            }
        }
        else if (entra_sai == 1)
        {
            if (monday.getPessoasDentro() < monday.getCapacidade())
            {
                monday.entra();
            }
            else
            {
                cout << "Erro: Elevador cheio!" << endl;
            }
        }
        else
        {
            cout << "Somente valor 0 ou 1!!" << endl;
            break;
        }

        cout << "Desce (0) ou sobe (1): ";
        cin >> sobe_desce;

        if (sobe_desce == 0)
        {
            if (monday.getAndar_Atual() != 0)
            {
                monday.desce();
            }
            else
            {
                cout << "Elevador já está no térreo!";
            }
        }
        else if (sobe_desce == 1)
        {
            if (monday.getAndar_Atual() != monday.getTotal_Andares())
            {
                monday.sobe();
            }
            else
            {
                cout << "Elevador já chegou ao topo!";
            }
        }
        else
        {
            cout << endl << "Somente valor 0 ou 1!!" << endl;
            cout << sobe_desce << endl;
            break;
        }

        cout << endl << "Pessoas no elevador: " << monday.getEntrada_Saida() << endl;
        cout << "Andar atual: " << monday.getSubida_Descida() << endl;

        cout << endl << "Continuar? Nao (0) / Sim (1): ";
        cin >> decisao;

        if (decisao == 0)
        {
            break;
        }
    }

    cout << "Programa finalizado. Elevador:" << endl;
    cout << "Capacidade - " << monday.getCapacidade() << " pessoas;" << endl;
    cout << "Andares do prédio - " << monday.getTotal_Andares() << endl;
    cout << "Pessoas dentro - " << monday.getEntrada_Saida() << " pessoas;" << endl;
    cout << "Andar atual - " << monday.getSubida_Descida() << "º andar" << endl;

    return 0;
}
