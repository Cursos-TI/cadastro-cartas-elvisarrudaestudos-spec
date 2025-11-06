#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
int população;
float area, pib;
int pontos_turisticos;




  // Área para entrada de dados
    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área em km²: ");
    scanf("%f", &area);

    printf("Digite o PIB em bilhões: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

  // Área para exibição dos dados da cidade
    printf("\n=== Dados da Carta ===\n");
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    
return 0;
} 
