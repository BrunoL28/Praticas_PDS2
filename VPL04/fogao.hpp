#ifndef FOGAO_HPP
#define FOGAO_HPP

#include <iostream>

class Fogao{
    
    private:

    // Adicione suas variaveis globais aqui

        int numero_de_queimadores;
        int capacidade_forno;

    public:

    // Adicione a assinatura dos seus metodos / construtores aqui

        Fogao(int queimadores, int capacidade);

        ~Fogao();

        int getQueimadores();

        int getForno();

        void setQueimadores(int queimadores);

        void setForno(int capacidade);

        void imprimeFogao(Fogao fogao);

};

#endif