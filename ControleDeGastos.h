#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H
#include "Despesa.h"
#include <string>
#include<iostream>

using namespace std;

class ControleDeGastos{ //CRIA CONTROLE DE GASTOS

public:
    Despesa despesa[10]; //CRIA ATRIBUTO DO TIPO DA CLASSE DESPESAS DE NOME DESPESAS

    ControleDeGastos(Despesa despesa);

    void addDespesasControle(Despesa despesa, int i); //SETA DESPESAS
    double CalculaTotalDespesa();
    bool ExisteDespesaDoTipo(std::string tipoDeGasto); //METODO PARA CVERIFICAR SE HA O MESMO TIPO DE GASTO
};

#endif // CONTROLEDEGASTOS_H
