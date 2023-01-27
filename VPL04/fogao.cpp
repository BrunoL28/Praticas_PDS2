#include "fogao.hpp"

// Adicione seus metodos / construtores aqui
Fogao::Fogao(int queimadores, int capacidade){
    numero_de_queimadores = queimadores;
     capacidade_forno = capacidade;
}

int Fogao::getQueimadores(){
    return numero_de_queimadores;
}

int Fogao::getForno(){
    return capacidade_forno;
}

void Fogao::setQueimadores(int queimadores){
    queimadores = numero_de_queimadores;
}

void Fogao::setForno(int forno){
    forno = capacidade_forno;
}

void Fogao::imprimeFogao(Fogao fogao){
    std::cout << fogao.numero_de_queimadores << fogao.capacidade_forno << std::endl;
}