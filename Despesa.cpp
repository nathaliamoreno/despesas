#include "Despesa.h"
#include <string>
#include<iostream>

using namespace std;

//INICIO METODOS DESPESAS
Despesa::Despesa(){

}
Despesa::Despesa(std::string tipoDeGastos, double valor){ //CONTROLE

    this->tipoDeGastos = tipoDeGastos;
    this->valor = valor;
}
void Despesa::setValor(double valor){
    this->valor = valor;
}
void Despesa::setTipoDeGastos(std::string tipoDeGastos){
    this->tipoDeGastos = tipoDeGastos;
}
double Despesa::getValor(){
    return valor;
}
std::string Despesa::getTipoDeGastos(){
    return tipoDeGastos;
}
