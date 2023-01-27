#include "fogao.hpp"
#include "geladeira.hpp"
#include "estoque.hpp"
#include <iterator>

Estoque::Estoque(){}

void Estoque::armazena_geladeira(int capacidade, int portas){
    Geladeira geladeira = Geladeira(capacidade, portas);
    geladeiras.push_back(geladeira);
}

void Estoque::vende_geladeira(int capacidade, int portas){
    int aux = 0;
    Geladeira geladeira(capacidade, portas);
    std::vector<Geladeira>::iterator it;
    for(it = geladeiras.begin(); it != geladeiras.end(); it++, aux++){
        if(it->getCapacidade() == geladeira.getCapacidade() && 
            it->getPortas() == geladeira.getPortas()){
                geladeiras.erase(geladeiras.begin() + aux);
                break;
        } 
    }
}

void Estoque::armazena_fogao(int queimadores, int capacidade){
    Fogao fogao = Fogao(queimadores, capacidade);
    fogoes.push_back(fogao);
}

void Estoque::vende_fogao(int queimadores, int capacidade){
    int aux = 0;
    Fogao fogao(queimadores, capacidade);
    std::vector<Fogao>::iterator it;
    for(it = fogoes.begin(); it != fogoes.end(); it++, aux++){
        if(it->getQueimadores() == fogao.getQueimadores() &&
            it->getForno() == fogao.getForno()){
                fogoes.erase(fogoes.begin() + aux);
                break;
            }
    }
}

void Estoque::exibe_geladeiras(){
    for(Geladeira geladeira : geladeiras){
        geladeira.imprimeGeladeira(geladeira);
    }
}

void Estoque::exibe_fogoes(){
    for(Fogao fogao : fogoes){
        fogao.imprimeFogao(fogao);
    }
}

int Estoque::quantidade_geladeiras(){
    return geladeiras.size();
}

int Estoque::quantidade_fogoes(){
    return fogoes.size();
}