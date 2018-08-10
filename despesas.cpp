#include "Despesas.h"

using namespace std;

Despesas::Despesas(std::string tipoDeGastos, double valor){

    this->tipoDeGastos = tipoDeGastos;
    this->valor = valor;
}
void Despesas::setValor(double idade){
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

void ControleDeGastos::setDespesas(Despesas despesas[]){
    int i=0;
    for(i=0;i<3;i++){
    this->despesas[i] = despesas[i];
}}
double ControleDeGastos::CalculaTotalDespesa(){

    double total=0;
    int i=0;

     for(i = 0; i < 3; i++){
        total+=despesas[i].getValor();
    }
    return total;
}
bool ControleDeGastos::ExisteDespesaDoTipo(){

    int i=0;

    for(int i = 0; i < 3 ; i++){
        if(tipoDeGasto == despesas[i].getTipoDeGasto()){
            return true;
        }
    }

return false;
}
