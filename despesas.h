#ifndef DESPESAS_H_INCLUDED
#define DESPESAS_H_INCLUDED
#include <string>

using namespace std;

class Despesas{

private:
    std::string tipoDeGastos;
    double valor;

public:

    Despesas(std::string tipoDeGastos, double valor);

    void setValor(double idade);
    void setTipoDeGastos(std::string tipoDeGastos);

    double getValor();
    std::string getTipoDeGastos();
};
class ControleDeGastos{

private:
    Despesas despesas[];

public:

    void setDespesas(Despesas despesas[]);
    double CalculaTotalDespesa();
    bool ExisteDespesaDoTipo();
};


#endif // DESPESA_H
