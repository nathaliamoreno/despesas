#ifndef DESPESAS_H_INCLUDED
#define DESPESAS_H_INCLUDED
#include <string>
#include<iostream>

using namespace std;


class Despesas{ //CRIA CLASSE DESPESAS

public:
    std::string tipoDeGastos;
    double valor;


    Despesas(std::string tipoDeGastos, double valor);

    void setValor(double valor);
    void setTipoDeGastos(std::string tipoDeGastos);

    double getValor();
    std::string getTipoDeGastos();
};
        //FIM DE CLASSE DESPESAS

class ControleDeGastos{ //CRIA CONTROLE DE GASTOS

public:
    Despesas despesas; //CRIA ATRIBUTO DO TIPO DA CLASSE DESPESAS DE NOME DESPESAS


    void setdespesasControle(Despesas despesas); //SETA DESPESAS
    double CalculaTotalDespesa();
    bool ExisteDespesaDoTipo(std::string tipoDeGasto); //METODO PARA CVERIFICAR SE HA O MESMO TIPO DE GASTO
};

        //FIM DE CLASSSE CONTROLE DE DESPESAS
#endif // DESPESAS_H
