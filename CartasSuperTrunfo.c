#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

/*
Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
 
Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
 
Nome da Cidade: O nome da cidade. Tipo: char[] (string)
 
População: O número de habitantes da cidade. Tipo: int
 
Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
 
PIB: O Produto Interno Bruto da cidade. Tipo: float
 
Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
*/

typedef struct {
  char estado;  //< Estado, uma letra de 'A' a 'H'
  char codigo[4]; //< Código da Carta, ex: A01
  char nome[50]; //< Nome da Cidade
  int populacao; //< População
  float area; //< Área em km²
  float pib; //< PIB
  int numPontosTuristicos; //< Número de Pontos Turísticos
} Carta;

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int numCartas = 2;
  Carta cartas[numCartas];
  memset(&cartas[0], '\0', sizeof(Carta) * numCartas);

  // Área para entrada de dados
  for (int i = 0; i < numCartas; i++) {
    printf("Digite os dados da cidade %d:\n", i + 1);
    printf("Estado (A-H): ");
    scanf(" %c", &cartas[i].estado);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", cartas[i].codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cartas[i].nome);
    printf("População: ");
    scanf("%d", &cartas[i].populacao);
    printf("Área (em km²): ");
    scanf("%f", &cartas[i].area);
    printf("PIB: ");
    scanf("%f", &cartas[i].pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &cartas[i].numPontosTuristicos);
  }


  // Área para exibição dos dados da cidade
  printf("\nCartas cadastradas:\n");
  for (int i = 0; i < numCartas; i++) {
    printf("Carta %d:\n", i + 1);
    printf("Estado: %c\n", cartas[i].estado);
    printf("Código da Carta: %s\n", cartas[i].codigo);
    printf("Nome da Cidade: %s\n", cartas[i].nome);
    printf("População: %d\n", cartas[i].populacao);
    printf("Área (em km²): %.2f\n", cartas[i].area);
    printf("PIB: %.2f\n", cartas[i].pib);
    printf("Número de Pontos Turísticos: %d\n", cartas[i].numPontosTuristicos);
    printf("\n");
  }

return 0;
} 
