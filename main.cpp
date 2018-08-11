#include <iostream>
#include "Despesas.h"
#include <string>

using namespace std;

int main()
{
        Despesas despesa1 = Despesas("Boleto", 300); //ATRIBUI VALORES
        Despesas despesa2 = Despesas("Aluguel", 900);

        ControleDeGastos gastosTotais = ControleDeGastos(); //CRIA gastosTotais que recebe ControleDeGastos

        gastosTotais.setDespesas(despesa1); //Passa valores para gastosTotais

        cout << "Valor total das despesas: R$ " << gastosTotais.CalculaTotalDespesa() << endl;
        cout << "Despesa com boleto: R$ " << gastosTotais.ExisteDespesaDoTipo("Boleto") << endl;
        cout << "Despesa com aluguel: R$ " << gastosTotais.ExisteDespesaDoTipo("Aluguel") << endl;

        cout <<"--------------------------------------" << endl;


    return 0;
}
