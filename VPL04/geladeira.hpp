#ifndef GELADEIRA_HPP
#define GELADEIRA_HPP

#include <iostream>

class Geladeira {
    
    private:

    // Adicione suas variaveis globais aqui

        int capacidade_em_litros;
        int numero_de_portas;

    public:

    // Adicione a assinatura dos seus metodos / construtores aqui

        Geladeira(int capacidade, int portas);

        ~Geladeira();

        int getCapacidade();

        int getPortas();

        void setCapacidade(int capacidade);

        void setPortas(int portas);

        void imprimeGeladeira(Geladeira geladeira);

};

#endif