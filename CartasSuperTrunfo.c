#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
     // variaveis para armazenar os dados das cartas
    char estado1[20], estado2[20];
    char nomeCidade1[50], nomeCidade2[50];
    char codigo1[4], codigo2[4];
    int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2;
    float area1, area2;
    float pib1, pib2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;

    // Entrada de dados para a primeira carta
    printf("Digite o estado da primeira carta: \n");
    scanf("%s", estado1);

    printf("Digite o código da primeira carta (ex: A01): \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da primeira carta: \n");
    scanf(" %[^\n]s", &nomeCidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos1);

    // Entrada de dados para a segunda carta
    printf("Digite o estado da segunda carta: \n");
    scanf("%s", estado2);

    printf("Digite o código da segunda carta (ex: B01): \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da segunda carta: \n");
    scanf(" %[^\n]s", &nomeCidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos2);

    // Cálculos
    densidade_populacional1 = populacao1 / area1;
    densidade_populacional2 = populacao2 / area2;

    pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // Exibição dos dados da primeira carta
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB Per Capita: %.2freais\n", pib_per_capita1);

    // Exibição dos dados da segunda carta
    printf("\n--- Cartas 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2fkm²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB Per Capita: %.2f reais\n", pib_per_capita2);

    return 0;
}
