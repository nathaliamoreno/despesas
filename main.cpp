#include <iostream>
#include "Despesas.h"
#include <string>

using namespace std;

int main()
{
        Despesas despesas[3];
        Despesas despesas[0] = Despesas("Boleto", 300);
        Despesas despesas[1] = Despesas("Aluguel", 700);
        Despesas despesas[2] = Despesas("Passagem", 500);

        ControleDeGastos gastosTotais = ControleDeGastos();
        gastosTotais.setDespesa(despesas[]);


        cout << "Valor total das despesas: R$ " << gastosTotais.CalculaTotalDespesa() << endl;
        cout << "Despesa com boleto: R$ " << gastosTotais.ExisteDespesaDoTipo("Boleto") << endl;
        cout << "Despesa com aluguel: R$ " << gastosTotais.ExisteDespesaDoTipo("Aluguel") << endl;
        cout << "Despesa com aluguel: R$ " << gastosTotais.ExisteDespesaDoTipo("Passagem") << endl;

        cout <<"--------------------------------------" << endl;


    return 0;
}
