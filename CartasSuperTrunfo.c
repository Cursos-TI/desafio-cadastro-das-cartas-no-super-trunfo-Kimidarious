#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
     // variaveis para armazenar os dados da primeira carta
     char codigo1[4];
     int populacao1, pontos_turisticos1;
     float area1, pib1;
 
     // variaveis para armazenar os dados da segunda carta
     char codigo2[4];
     int populacao2, pontos_turisticos2;
     float area2, pib2;
 
     // Entrada de dados para a primeira carta
     printf("Digite o código da primeira carta (ex: A01): \n");
     scanf("%s", codigo1);
 
     printf("Digite a população: \n");
     scanf("%d", &populacao1);
 
     printf("Digite a área: \n");
     scanf("%f", &area1);
 
     printf("Digite o PIB: \n");
     scanf("%f", &pib1);
 
     printf("Digite a quantidade de pontos turisticos: \n");
     scanf("%d", &pontos_turisticos1);
 
     // Entrada de dados para a segunda carta
     printf("Digite o código da segunda carta (ex: B01): \n");
     scanf("%s", codigo2);
 
     printf("Digite a população: \n");
     scanf("%d", &populacao2);
 
     printf("Digite a área: \n");
     scanf("%f", &area2);
 
     printf("Digite o PIB: \n");
     scanf("%f", &pib2);
 
     printf("Digite a quantidade de pontos turisticos: \n");
     scanf("%d", &pontos_turisticos2);
 
     // Exibição dos dados da primeira carta
     printf("\n--- Carta 1 ---\n");
     printf("Código: %s\n", codigo1);
     printf("População: %d\n", populacao1);
     printf("Área: %.2f:\n", area1);
     printf("PIB: %.2f\n", pib1);
     printf("Pontos Turisticos: %d\n", pontos_turisticos1);
 
     // Exibição dos dados da segunda carta
     printf("\n--- Cartas 2 ---\n");
     printf("Código: %s\n", codigo2);
     printf("População: %d\n", populacao2);
     printf("Área: %.2f:\n", area2);
     printf("PIB: %.2f\n", pib2);
     printf("Pontos Turisticos: %d\n", pontos_turisticos2);
 
     return 0;
}
