/*RESOLUÇAO PROCESSO SELETIVO ESTÁGIO TARGET SISTEMAS */

/* QUESTÃO  01 */

#include <iostream>
#include <string> 

int main() {
  /*1) Observe o trecho de código abaixo:*/
  int INDICE = 13;
  int SOMA = 0;
  int K = 0;

  while(K < INDICE){
  K = K + 1;
  SOMA = SOMA + K;
  }

  std :: cout << SOMA << std::endl;

  /*Ao final do processamento, qual será o valor da variável SOMA?
  RESPOSTA: Ao final do processamento da estrutura condicional while, onde está sendo executado o incremento de 1 unidade na variavel K enquanto (que foi inicializada em zero ) ela for menor que a variavél INDICE (que foi inicializada em 13). Esse laço será executado por 13 vezes (até K = 12), e a cada repetição o valor de K é somado a variavel SOMA. Conforme apresentado no código acima,  o valor final de SOMA = 91. 
  1 - SOMA = 0; INDICE = 13; K = 0;  0<13; K = 1; SOMA = 0+1=1;
  2 - SOMA = 1; INDICE = 13; K = 1;  1<13; K = 2; SOMA = 1+2=3;
  3 - SOMA = 3; INDICE = 13; K = 2;  2<13; K = 3; SOMA = 3+3=6;
  4 - SOMA = 6; INDICE = 13; K = 3;  3<13; K = 4; SOMA = 6+4=10;
  5 - SOMA = 10; INDICE = 13; K = 4;  4<13; K = 5; SOMA = 10+5=15;
  6 - SOMA = 15; INDICE = 13; K = 5;  5<13; K = 6; SOMA = 15+6=21;
  7 - SOMA = 21; INDICE = 13; K = 6;  6<13; K = 7; SOMA = 21+7=28;
  8 - SOMA = 28; INDICE = 13; K = 7;  7<13; K = 8; SOMA = 28+8=36;
  9 - SOMA = 36; INDICE = 13; K = 8;  8<13; K = 9; SOMA = 36+9=45;
  10 - SOMA = 45; INDICE = 13; K = 9;  9<13; K = 10; SOMA = 45+10=55;
  11 - SOMA = 55; INDICE = 13; K = 10; 10<13; K = 11; SOMA = 55+11=66;
  12 - SOMA = 66; INDICE = 13; K = 11; 11<13; K = 12; SOMA = 66+12=78;
  13 - SOMA = 78; INDICE = 13; K = 12; 12<13; K = 13; SOMA = 78+13=91;
  14 - SOMA = 91; INDICE = 13; K = 13; 13<13 - NÃO; Nesta linha o código sai do laço pois a condição K<INDICE não é mais verdadeira.
  */


/* ========================================================= 

QUESTÃO  02 

2) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.

  IMPORTANTE:

  Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser previamente definido no código; */


  int numero, a =0, b = 1 , aux =0;

/* SOLICITANDO QUE O USUARIO DIGITE UM NUMERO PARA CONSULTAR SE O MESMO PERTENCE A SEQUENCIA.*/ 

  std::cout << "Por favor, insira o valor a ser consultado: ";
  std::cin >> numero;

// VERIFICANDO SE  O NÚMERO PERTENCE A SEQUENCIA DE FIBONACCI.

  while (aux < numero){
    aux = b;
    b = a+b;
    a = aux;
  }

  if (aux == numero){
    std::cout << "O número pertence a sequência de Fibonacci." << std::endl;
  }
  else {
    std::cout << "O número não pertence a sequência de Fibonacci." << std::endl;
  }

/* ========================================================= 
  QUESTÃO 03 

  3) Descubra a lógica e complete o próximo elemento:

8, 2, 4, 1, 1, 1, 1 

  a) 1, 3, 5, 7, 9.

  b) 2, 4, 8, 16, 32, 64, 128.

  c) 0, 1, 4, 9, 16, 25, 36, 49.

  d) 4, 16, 36, 64, 100.

  e) 1, 1, 2, 3, 5, 8, 13.

  f) 2,10, 12, 16, 17, 18, 19, 200.


 ========================================================= 

  QUESTÃO 04 

4) Você está em uma sala com três interruptores, cada um conectado a uma lâmpada em uma sala diferente. Você não pode ver as lâmpadas da sala em que está, mas pode ligar e desligar os interruptores quantas vezes quiser. Seu objetivo é descobrir qual interruptor controla qual lâmpada.

  Como você faria para descobrir, usando apenas duas idas até uma das salas das lâmpadas, qual interruptor controla cada lâmpada? 

RESPOSTA: Todos os interruptores na posição desligado (convencionalmente para baixo ou para esquerda). Ligaria o interruptor 1 e aguardaria. Desligo o interruptor 1. Ligo o interruptor 2 e vou ate uma das salas. Observo a lâmpada:

Opção 1 - Ligada: concluo que ela é acionada pelo interruptor 2;
Opção 2 - Desligada: observo se a mesma está fria o quente; Caso esteja quente, é acionada pelo interruptor 1; Caso esteja fria é acionada pelo interruptor 3;

Definida essa sala volto para a sala anterior e modifico outro interruptor para a posição ligado. Me direciono para uma segunda sala: se a lampada estiver ligada o interruptor que aciona é o que eu acabei de modificar, e por eliminação o interruptor que está desligado é o da terceira sala.

========================================================= 

     QUESTÃO 05 

  5) Escreva um programa que inverta os caracteres de um string.


  IMPORTANTE:

  a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;

  b) Evite usar funções prontas, como, por exemplo, reverse; */

// RESOLUÇÃO 

  std::string texto, textoinvertido;
  std::cout << "Digite aqui o seu texto: ";
 // Lê o texto digitado pelo usuário e armazena na variável texto
  std::cin.ignore();
  std::getline(std::cin, texto);

  int tamanho;
  tamanho = texto.size();
  textoinvertido.resize(tamanho);

  for (int i=0; i<=tamanho; i++){
    textoinvertido[i]=texto[tamanho-i-1];
  }
  std::cout << "O texto invertido é: "<< textoinvertido << std::endl;
  return 0;
}