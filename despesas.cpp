#include "Despesas.h"
#include <string>
#include<iostream>

using namespace std;

//INICIO METODOS DESPESAS
Despesas::Despesas(std::string tipoDeGastos, double valor){ //CONTROLE

    this->tipoDeGastos = tipoDeGastos;
    this->valor = valor;
}
void Despesas::setValor(double valor){
    this->valor = valor;
}
void Despesas::setTipoDeGastos(std::string tipoDeGastos){
    this->tipoDeGastos = tipoDeGastos;
}
double Despesas::getValor(){
    return valor;
}
std::string Despesas::getTipoDeGastos(){
    return tipoDeGastos;
}

//INICIO METODOS CONTROLE DE GASTOS

void ControleDeGastos::setdespesasControle(Despesas Despesas){
    this->despesas = despesas;
}

double ControleDeGastos::CalculaTotalDespesa(){

    double total=0;

        total+=despesas.getValor(); //SOMANDO VALOR NO TOTAL

return total;
}
bool ControleDeGastos::ExisteDespesaDoTipo(string tipoDeGasto){

    if(tipoDeGasto == despesas.getTipoDeGastos()){ //COMPARARANDO STRINGS
        return true;
    }else{
        return false;
    }
}
