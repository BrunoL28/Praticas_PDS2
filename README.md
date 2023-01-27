# Praticas_PDS2

Aqui você pode conferir os enunciados de cada VPL. Basta clicar no "Clique aqui" abaixo de cada VPL para ver seu respectivo enunciado.

### VPL01

<details>
  <summary>Clique aqui</summary>
    O objetivo desse VPL é praticar os comandos de entrada e saída específicos de C++ (cin, cout) e também a utilização do tipo string.

Escreva um programa que lê apenas uma única palavra da entrada. Em seguida, seu programa deve contar o número de vogais presente na palavra. Ao final, deve-se imprimir a quantidade de vezes que uma determinada vogal apareceu. Se uma vogal não apareceu nenhuma vez ela não deve ser impressa.

Para facilitar, você pode assumir que as palavras sempre terão todas as letras minúsculas.

Exemplos de entrada e saída:

input = 
  
estudantes

output = 
  
a 1
  
e 2
  
u 1


input = 
  
abacaxi

output = 
  
a 3
  
i 1

</details>

### VPL02

<details>
  <summary>Clique aqui</summary>
    Neste exercício, devemos implementar dois TADs para auxiliar na resolução do seguinte problema: Lisarb é um país que possui orçamento restrito, e diversas demandas sociais. Desta forma, seus representantes nos solicitaram construir um sistema para auxiliar na gestão dos recursos provenientes de impostos. Segundo a lei vigente, cinco categorias de gastos devem ser consideradas, sendo que cada uma delas receberá um percentual dos impostos arrecadados. 

As categorias possuem identificadores numéricos, sendo elas:

0 - Saúde

1 - Educação

2 - Segurança

3 - Previdência

4 - Administração Pública

Os percentuais recebidos por cada categoria devem ser os seguintes:

0 - Saúde - 15%

1 - Educação - 15%

2 - Segurança - 20%

3 - Previdência - 35%

4 - Administração Pública - 15%


Para realizar esta tarefa, devemos criar os tipos de dados Categoria e Orcamento.

O TAD Categoria deve possuir um código (inteiro) e o valor que esta categoria de gasto possui em caixa (double).

O TAD Orcamento deve conter as cinco categorias.


Para manipular uma categoria, será preciso implementar os seguintes métodos:

Categoria

- Categoria(int codigo_categoria, double valor_caixa): Construtor que inicializa um objeto categoria com seu código e o valor que ela deve ter em caixa para gastos com sua pasta.
- int getCodigo(): Recupera o código correspondente a uma categoria.
- double getValorCaixa(): Recupera o valor em caixa de uma categoria.
- void adicionaCaixa(double valor): Adiciona uma quantia ao caixa de uma categoria.
- void gastaCaixa(double valor): Remove uma quantia ao caixa de uma categoria.


Orcamento

- Orcamento(double impostos): Construtor que inicializa um objeto Orçamento, sendo que ele deve conter um objeto categoria para cada pasta. Recebe como parâmetro o valor monetário que deve ser atribuído a aquele orçamento. Este valor deve ser distribuído a cada categoria, nos percentuais descritos anteriormente.
- void gastoCategoria(int codigo_categoria, double valor): Reduz o valor no caixa da categoria especificada.
- double getSaldo(int codigo_categoria): Retorna o valor em caixa da categoria especificada.
- Categoria* getCategoria(int codigo_categoria): Retorna o ponteiro para o objeto da categoria especificada.


Importante: Uma categoria pode ter dívidas, ou seja, seu caixa pode ser menor que zero.

</details>

### VPL04

<details>
  <summary>Clique aqui</summary>
    Uma loja vende eletrodomésticos, comercializando apenas geladeiras e fogões.

Após comprar um software para organizar seu estoque, verificou-se que não era possível dar manutenção nele de forma simples. Além disso, o software existente entrega ao cliente sempre o último eletrodoméstico daquele tipo adicionado no estoque, mesmo que não corresponda ao que foi especificado pelo cliente. Portanto, optou-se por contratar um consultor para revisar e reestruturar o software adquirido.
Sua tarefa é criar a partir do software descrito nos arquivos old.hpp e old.cpp escrever classes, uma para cada eletrodoméstico comercializado, e uma para o estoque. Além disso, deve ser possível vender uma geladeira apenas se ela tiver as especificações corretas.

Importante: Remova o include da classe old.hpp do arquivo main. Revisar e modificar o Makefile é parte da tarefa.
</details>

### VPL05

<details>
  <summary>Clique aqui</summary>
    Esse exercício foi desenhado para se praticar a manipulação de dados em memória considerando-se o uso de ponteiros.

Deve-se preencher o corpo das funções com o código para realizar a tarefa descrita nas linhas.
</details>

### VPL06

<details>
  <summary>Clique aqui</summary>
    Durante a pandemia, a utilização de aplicativos para fazer pedidos dos mais variados se tornou muito comum. Neste problema, você terá que simular a compra de lanches do festival ICEx para levantar fundos para o DCE. Para isso, implemente seis classes: Venda, Pedido, Produto, Açaí, Cachorro-quente e Pizza. 

OBS: Os arquivos venda.hpp, pedido.hpp e produto.hpp não devem ser modificados.

A classe Produto armazena as informações e métodos listadas a seguir. Note que seus métodos (em itálico) são virtuais e não implementam comportamento padrão.

Produto

--------------------------------------------------------------------------------------------------------------------------

# _quantidade: int

# _valor_unitario: float

+ descricao() = 0 : string

+ calcPreco() = 0 : float


As classes Açaí, Pizza e Cachorro-Quente herdam de Produto, e possuem as seguintes especificidades:

Açai

--------------------------------------------------------------------------------------------------------------------------

- _tamanho: int

- _complementos: string[1..10]

+ Acai(int tam, vector<string>& comp, int qtd)

+ descricao() : string

+ calcPreco() : float


Cachorro-quente

--------------------------------------------------------------------------------------------------------------------------

- _num_salsichas: int

- _complementos: string[1..10]

- _prensado: bool

+ CachorroQuente(int num_s, vector<string>& comp, bool prens, int qtd)

+ descricao() : string

+ calcPreco() : float


Pizza

--------------------------------------------------------------------------------------------------------------------------

- _sabor: string

- _num_pedacos: int

- _borda_recheada: bool

+ Pizza(string sabor, int pedacos, bool borda, int qtd)

+ descricao() : string

+ calcPreco() : float

A classe Pedido deverá ter uma lista de produtos, o endereco de entrega e os seguintes métodos deverão ser implementados (modifiquem apenas o arquivo pedido.cpp):

Pedido

------------------------------------------------------------------

- produtos: std::list<Produto*>

- endereco: string

+ adicionaProduto(Produto* p): void

+ calculaTotal(): float

+ resumo(): string

+ setEndereco(string endereco): void


Breve descrição:

void adicionaProduto(Produto* p); // adiciona um produto ao pedido

float calculaTotal(); // calcula e retorna o valor total do pedido

string resumo(); // retorna um resumo do pedido (uma descrição de todos os produtos que fazem parte do pedido e o endereço de entrega no final)

setEndereco(string endereco); // atualiza o endereço de entrega do pedido


A classe Venda, terá uma lista de pedidos recebidos e os métodos a seguir (modifiquem apenas o arquivo venda.cpp):

Venda

--------------------------------------------------------------------------------------------------------------------------

- pedidos: std::list<Pedido*>

+ adicionaPedido(Pedido* p): void

+ imprimeRelatorio(): void


Breve descrição:

void adicionaPedido(Pedido* p); // adiciona um pedido à lista de pedidos recebidos

void imprimeRelatorio(); // imprime a lista completa de todos pedidos processados, o total de vendas e a quantidade de pedidos recebidos

Referências

https://www.cplusplus.com/doc/tutorial/classes/

https://www.cplusplus.com/reference/list/list/

https://www.cplusplus.com/reference/string/string/

https://www.cplusplus.com/doc/tutorial/inheritance/

https://www.cplusplus.com/doc/tutorial/polymorphism/

http://www.cplusplus.com/forum/beginner/222475/

Formato de entrada

Os pedidos são compostos por uma lista de produtos e um endereço de entrega. A tag pedido indica o início de um novo pedido e a tag endereço indica o final do pedido. Cada linha de  produto informa o tipo do produto (açaí, cachorro-quente ou pizza) seguido dos respectivos atributos na mesma ordem dos seus construtores.

Formato de saída

Após o processamento de todos os pedidos, o método imprimeRelatorio() da classe Venda é executado. O relatório deverá imprimir uma descrição detalhada de todos os pedidos que foram processados, a quantidade de pedidos e o total de vendas.
</details>

### VPL09

<details>
  <summary>Clique aqui</summary>
    Você vai trabalhar com o "Jogo da Vida" desenvolvido por John Horton Conway, embora não seja um "jogo" tradicional. O programa expressa as regras da Vida em uma matriz de células que segue a modelagem Toro. Nesse modelo, cada célula da matriz (sem exceção) tem exatamente 8 vizinhas, ou seja, após a última coluna, vem a primeira coluna e após a última linha vem a primeira linha (e vice versa). Por exemplo, numa matriz de 4x5 (4 linhas e 5 colunas) a esquerda da célula [0, 0] está a célula [0, 4] e abaixo da célula [3, 4] está a célula [0, 4].

Cada célula da matriz pode estar viva ou morta, e a cada iteração, células mortas podem reviver ou células vivas podem morrer, obedecendo às seguintes regras:

    Cada célula possui oito células vizinhas: 4 diretamente acima, abaixo, à direita, à esquerda, e as 4 diagonais adjacentes.
    Se uma célula viva possui 0 ou 1 vizinhas, morre de solidão.
    Se uma célula viva possui mais de 3 vizinhas, morre de superpopulação.
    Se uma célula morta possui exatamente 3 células vizinhas ocupadas, ela revive
    Nascimentos e mortes são ocorrem simultaneamente no início de cada iteração. Uma célula que morre pode provocar um nascimento, mas uma célula recém-nascida não pode ressuscitar uma célula morrendo, nem a morte de uma célula impede a morte de outra, digamos, por meio da redução da população local.

Exemplos em: https://www.youtube.com/watch?v=23MBR2pZoDQ

Você já vai receber o jogo da vida PRONTO (uhuul 🥳). Ele está preparado para receber o seguinte conjunto de entradas:

    <número de iterações do jogo da vida>
    <número de linhas da matriz> <número de colunas da matriz>
    <linha da primeira célula viva> <coluna da primeira célula viva>
    <linha da segunda célula viva> <coluna da segunda célula viva>
    ...
    <linha da n-ésima célula viva> <coluna da n-ésima célula viva>

Exemplo de entrada para o código atual:

5
      
25 60
      
1 2
      
2 3
      
3 1
      
3 2
      
3 3
      
21 22
      
22 23
      
23 21
      
23 22
      
23 23
      
19 8
      
18 6
      
18 8
      
17 7
      
17 8 

Seu trabalho primeiramente é baixar o código, abrir na sua IDE de preferência (VSCode né galera :D) e entender o funcionamento do código.

Agora que você entende o código é hora de torná-lo mais robusto para que ele não encerre abruptamente sem explicação. Vamos fazer um tratamento de exceções referente às coordenadas de células vivas alimentadas pelo usuário, de modo que entradas inválidas disparem uma verificação se o usuário deseja continuar o jogo ignorando aquela entrada.

Das n entradas referentes às células vivas, entradas inválidas são acompanhadas por um caracter (s ou n) se deseja continuar sem aquela célula. Qualquer caracter diferente do esperado dispara novamente a mensagem de erro (como especificado mais a frente).


O tratamento de exceção consiste em:

Criar no jogo_da_vida.hpp um TAD ExcecaoCelulaInvalida que herda de std::exception. Sua exceção deve possuir três atributos referente a linha e coluna responsáveis pelo erro, além de uma string para a mensagem de erro. Seus métodos são:
um construtor que recebe e inicializa os valores de linha e coluna, e no corpo da função monta a mensagem de erro como apresentado no exemplo acima (note que a linha e coluna fazem parte da mensagem de erro)
uma sobrescrita da função what() que retorna a mensagem de erro, que deve ser convertida para c_str para respeitar o tipo de retorno da função.

Encontre na main.cpp o trecho do código que deve ser protegido no escopo try-catch, ou seja, onde são utilizadas as entradas do usuário referente às células que devem estar vivas no início do jogo. O escopo do catch deve:
Receber uma referência a um objeto do tipo ExcecaoCelulaInvalida 

Tratar o erro criando um laço do-while que imprime a descrição do erro (método what()) e lê do usuário um caracter referente ao seu desejo de continuar sem aquela célula (opções: s ou n). A condição de parada do laço deve garantir que o laço só encerra se o usuário escolher uma opção válida. Se o usuário entrar 'n' o main encerra com return 1, se entrar 's' basta seguir o fluxo do jogo ignorando aquela entrada.
No jogo_da_vida.cpp você deve lançar o erro no momento adequado. Encontre o método equivalente à sua escolha de try-catch do ponto anterior, e verifique a validade dos parâmetros recebidos. Parâmetros invalidos devem lançar um erro do tipo ExcecaoCelulaInvalida.

</details>

### VPL10

<details>
  <summary>Clique aqui</summary>
    O projeto em anexo implementa a classe Triangulo. 

Seu construtor recebe valores inteiros referentes aos lados de um triângulo, exigindo que o primeiro lado seja o maior e que todos os lados satisfaçam o teorema da desigualdade triangular. 

Existem bugs nos métodos:
     
     getPerimeter()
     
     getArea()
     
     getKind()

Você é a pessoa que vai testar a classe Triangulo e, agora que notou os bugs, quer destacar esses erros através dos seus testes. 

Crie o arquivo triangulo_test.cpp com três casos de teste, um para cada método citado anteriormente, cada qual com dois subcasos:

    O subcaso positivo, com checagens que funcionam mesmo com os bugs.

    O subcaso negativo, com checagens que não funcionam por conta do bug, mas passarão a funcionar após sua correção.

Seu código deve estar completo e ser compilável. Lembre-se que:

    - É preciso definir a macro a seguir para que o seu arquivo tenha um ponto de entrada da execução (tenha um main).
    
    #define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

    - É preciso incluir o arquivo doctest.h após a configuração anterior para usar suas macros de teste 
    
    (#include "doctest.h")

</details>
