#include <iostream>
#include "Despesa.h"
#include "ControleDeGastos.h"
#include <string>

using namespace std;

int main()
{
        Despesa despesa1 = Despesa("Boleto", 300); //ATRIBUI VALORES
        Despesa despesa2 = Despesa("Aluguel", 900);
        double total=0;

        ControleDeGastos gastosTotais = ControleDeGastos(despesa1); //CRIA gastosTotais que recebe ControleDeGastos
        gastosTotais.addDespesasControle(despesa1, 0); //Passa valores para gastosTotais

        cout << "    **************************" << endl;
        cout << "         **** GASTOS ****     " << endl;
        cout << " " << endl;

        if (gastosTotais.ExisteDespesaDoTipo("Boleto") == 1){
        cout << " Valor das despesas com boleto:\n >>>> R$ " << gastosTotais.CalculaTotalDespesa() << endl;
        total += gastosTotais.CalculaTotalDespesa();
        }
        if (gastosTotais.ExisteDespesaDoTipo("Aluguel") == 1){
        cout << " Valor das despesas com aluguel:\n>>>> R$ " << gastosTotais.CalculaTotalDespesa() << endl;
        total += gastosTotais.CalculaTotalDespesa();
        }
        cout <<"----------------------------------" << endl;

        gastosTotais = ControleDeGastos(despesa2);
        gastosTotais.addDespesasControle(despesa2, 1);

        if (gastosTotais.ExisteDespesaDoTipo("Boleto") == 1){
        cout << " Valor das despesas com boleto:\n >>>> R$ " << gastosTotais.CalculaTotalDespesa() << endl;
        total += gastosTotais.CalculaTotalDespesa();
        }
        if (gastosTotais.ExisteDespesaDoTipo("Aluguel") == 1){
        cout << " Valor das despesas com aluguel:\n >>>> R$ " << gastosTotais.CalculaTotalDespesa() << endl;
        total += gastosTotais.CalculaTotalDespesa();
        }
        cout <<"----------------------------------" << endl;

        cout << "Valor total dos gastos:\n >>>> R$ " << total << endl;

    return 0;
}
