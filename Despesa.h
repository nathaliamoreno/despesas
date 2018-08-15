#ifndef DESPESA_H_INCLUDED
#define DESPESA_H_INCLUDED
#include <string>
#include<iostream>

using namespace std;


class Despesa{ //CRIA CLASSE DESPESAS

public:
    std::string tipoDeGastos;
    double valor;

    Despesa();
    Despesa(std::string tipoDeGastos, double valor);

    void setValor(double valor);
    void setTipoDeGastos(std::string tipoDeGastos);

    double getValor();
    std::string getTipoDeGastos();
};
        //FIM DE CLASSE DESPESAS

#endif // DESPESA_H
