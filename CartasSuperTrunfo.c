#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado;
    char codigo[10];
    char nome_cidade[50];
    int populacao;
    float area, pib;
    int pontos_turisticos;
  // Área para entrada de dados
    printf("=== Cadastro da Carta Super Trunfo ===\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado); // espaço antes do %c evita erro de leitura do Enter

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
  
  // Área para exibição dos dados da cidade
    printf("\n=== Dados da Carta ===\n");
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    
return 0;
} 
