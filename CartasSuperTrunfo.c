#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    // Carta 1
    char estado1;
    char codigo1[10];
    char nome1[50];
    int populacao1;
    float area1, pib1;
    int pontos1;

    // Carta 2
    char estado2;
    char codigo2[10];
    char nome2[50];
    int populacao2;
    float area2, pib2;
    int pontos2;
  
    // Área para entrada de dados
  
  // Carta 1 
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado); 

    printf("Digite o código da carta (ex: A01): ");
    scanf("%9s", codigo);

    printf("Digite o nome da cidade (sem espaços): ");
    scanf("%49s", nome_cidade);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área em km² (use ponto, ex: 1521.11): ");
    scanf(" %f", &area);

    printf("Digite o PIB em bilhões (use ponto, ex: 699.28): ");
    scanf(" %f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);
    
    // Carta 2    

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Digite o estado (A-H):\n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: B02):\n");
    scanf("%9s", codigo2);

    printf("Digite o nome da cidade (sem espaços):\n");
    scanf("%49s", nome2);

    printf("Digite a populacao:\n");
    scanf("%d", &populacao2);

    printf("Digite a area em km² (use ponto, ex: 1200.25):\n");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhoes (use ponto, ex: 300.50):\n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &pontos2);

  // Área para exibição dos dados da cidade
    
    printf("\n===== Carta 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);

    printf("\n===== Carta 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
    
return 0;
} 
