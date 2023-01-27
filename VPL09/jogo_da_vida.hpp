#pragma once

#include <vector>
#include <string>
#include <exception>

// Implementa o Jogo da Vida de John Conway.
// https://pt.wikipedia.org/wiki/Jogo_da_vida

class JogoDaVida {
 
 public:
 
  // Cria um jogo cujo torus tem l linhas e c colunas.
  // Todas as células são inicializadas como mortas.
 
  JogoDaVida(int l, int c);

  // Retorna o número de linhas do torus.
  int linhas() {return vivas_.size();};

  // Retorna o número de colunas do torus.
  int colunas() {return vivas_[0].size();};

  // Retorna o estado da célula [i, j].
  bool viva(int i, int j);

  // Alteram o estado célula [i, j].
  void Matar(int i, int j);
 
  void Reviver(int i, int j);

  // Executa a próxima iteração do jogo da vida.
  void ExecutarProximaIteracao();

  // Executa n iterações do jogo da vida.
  void Executar(int n);
 
 private:
 
  // Conta o número de vizinhas vivas da célula [x, y].
  int NumeroDeVizinhasVivas(int x, int y);

  // Armazena o estado das células.
   std::vector<std::vector<bool>> vivas_;  
 
};

class ExcecaoCelulaInvalida : public std::exception {

   private:

      int _m_error;  //linha do erro
      int _n_error;   //coluna do erro
      std::string _msg_error;

   public:

      ExcecaoCelulaInvalida(int m, int n);

      const char * what() const noexcept override;

};