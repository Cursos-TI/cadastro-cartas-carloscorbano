#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países

/*
Carta 1:

Estado: A

Código: A01

Nome da Cidade: São Paulo

População: 12325000

Área: 1521.11 km²

PIB: 699.28 bilhões de reais

Número de Pontos Turísticos: 50

Densidade Populacional: 8102.47 hab/km²

PIB per Capita: 56724.32 reais

 

Carta 2:

Estado: B

Código: B02

Nome da Cidade: Rio de Janeiro

População: 6748000

Área: 1200.25 km²

PIB: 300.50 bilhões de reais

Número de Pontos Turísticos: 30

Densidade Populacional: 5622.24 hab/km²

PIB per Capita: 44532.91 reais
*/

typedef struct {
  char estado;  //< Estado, uma letra de 'A' a 'H'
  char codigo[4]; //< Código da Carta, ex: A01
  char nome[50]; //< Nome da Cidade
  int populacao; //< População
  float area; //< Área em km²
  float pib; //< PIB
  int numPontosTuristicos; //< Número de Pontos Turísticos

  // obtido atraves calculos (não atraves de input)
  float densidadePopulacional; //< Densidade Populacional
  float pibPerCapita; //< PIB per Capita
} Carta;

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  Carta carta1, carta2;

  // reset de memoria
  memset(&carta1, 0, sizeof(Carta));
  memset(&carta2, 0, sizeof(Carta));

  // Entrada dos dados da Carta 1
  printf("Digite os dados da Carta 1:\n");
  printf("Estado: ");
  scanf(" %c", &carta1.estado);
  printf("Código: ");
  scanf(" %3s", carta1.codigo);
  printf("Nome da Cidade: ");
  scanf(" %49[^\n]", carta1.nome);
  printf("População: ");
  scanf("%d", &carta1.populacao);
  printf("Área (km²): ");
  scanf("%f", &carta1.area);
  printf("PIB (bilhões de reais): ");
  scanf("%f", &carta1.pib);
  printf("Número de Pontos Turísticos: ");
  scanf("%d", &carta1.numPontosTuristicos);

  // Cálculo dos atributos derivados da Carta 1
  carta1.densidadePopulacional = carta1.populacao / carta1.area;
  carta1.pibPerCapita = (carta1.pib * 1e9) / carta1.populacao;

  // Entrada dos dados da Carta 2
  printf("\nDigite os dados da Carta 2:\n");
  printf("Estado: ");
  scanf(" %c", &carta2.estado);
  printf("Código: ");
  scanf(" %3s", carta2.codigo);
  printf("Nome da Cidade: ");
  scanf(" %49[^\n]", carta2.nome);
  printf("População: ");
  scanf("%d", &carta2.populacao);
  printf("Área (km²): ");
  scanf("%f", &carta2.area);
  printf("PIB (bilhões de reais): ");
  scanf("%f", &carta2.pib);
  printf("Número de Pontos Turísticos: ");
  scanf("%d", &carta2.numPontosTuristicos);
  
  // Cálculo dos atributos derivados da Carta 2
  carta2.densidadePopulacional = carta2.populacao / carta2.area;
  carta2.pibPerCapita = (carta2.pib * 1e9) / carta2.populacao;
  
  // Exibição dos dados da Carta 1
  printf("\nDados da Carta 1:\n");
  printf("Estado: %c\n", carta1.estado);
  printf("Código: %s\n", carta1.codigo);
  printf("Nome da Cidade: %s\n", carta1.nome);
  printf("População: %d\n", carta1.populacao);
  printf("Área: %.2f km²\n", carta1.area);
  printf("PIB: %.2f bilhões de reais\n", carta1.pib);
  printf("Número de Pontos Turísticos: %d\n", carta1.numPontosTuristicos);
  printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidadePopulacional);
  printf("PIB per Capita: %.2f reais\n", carta1.pibPerCapita);

  // Exibição dos dados da Carta 2
  printf("\nDados da Carta 2:\n");
  printf("Estado: %c\n", carta2.estado);
  printf("Código: %s\n", carta2.codigo);
  printf("Nome da Cidade: %s\n", carta2.nome);
  printf("População: %d\n", carta2.populacao);
  printf("Área: %.2f km²\n", carta2.area);
  printf("PIB: %.2f bilhões de reais\n", carta2.pib);
  printf("Número de Pontos Turísticos: %d\n", carta2.numPontosTuristicos);
  printf("Densidade Populacional: %.2f hab/km² \n", carta2.densidadePopulacional);
  printf("PIB per Capita: %.2f reais\n", carta2.pibPerCapita);

  
  
return 0;
} 
