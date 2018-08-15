#include "Despesa.h"
#include "ControleDeGastos.h"
#include <string>
#include<iostream>


using namespace std;

ControleDeGastos::ControleDeGastos(Despesa despesa){
    int i=0;
    this->despesa[i] = despesa;
}

void ControleDeGastos::addDespesasControle(Despesa despesa, int i){

    this->despesa[i] = despesa;
}

double ControleDeGastos::CalculaTotalDespesa(){

    double total;
    int i=0;
        total=despesa[i].getValor(); //SOMANDO VALOR NO TOTAL

return total;
}
bool ControleDeGastos::ExisteDespesaDoTipo(string tipoDeGasto){

    int i=0;

    if(tipoDeGasto == despesa[i].getTipoDeGastos()){ //COMPARARANDO STRINGS
        return true;
    }else{
        return false;
    }
}
