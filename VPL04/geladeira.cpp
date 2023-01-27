#include "geladeira.hpp"

// Adicione seus metodos / construtores aqui

Geladeira::Geladeira(int capacidade, int portas){
    capacidade_em_litros = capacidade;
    numero_de_portas = portas;
}

int Geladeira::getCapacidade(){
    return capacidade_em_litros;
}

int Geladeira::getPortas(){
    return numero_de_portas;
}

void Geladeira::setCapacidade(int capacidade){
    capacidade = capacidade_em_litros;
}

void Geladeira::setPortas(int portas){
    portas = numero_de_portas;
}

void Geladeira::imprimeGeladeira(Geladeira geladeira){
    std::cout << geladeira.capacidade_em_litros << geladeira.numero_de_portas << std::endl;
}