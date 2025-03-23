#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

int main()
{
    // variaveis para armazenar os dados das cartas
    char estado1[20], estado2[20];
    char nomeCidade1[50], nomeCidade2[50];
    char codigo1[4], codigo2[4];
    unsigned long int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2;
    float area1, area2;
    float pib1, pib2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;

    // Entrada de dados para a primeira carta
    printf("Digite o estado da primeira carta: \n");
    scanf("%s", estado1);

    printf("Digite o código da primeira carta (ex: A01): \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da primeira carta: \n");
    scanf(" %[^\n]s", &nomeCidade1);

    printf("Digite a população: \n");
    scanf("%lu", &populacao1);

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
    scanf("%lu", &populacao2);

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

    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1.0 / densidade_populacional1);
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade_populacional2);

    // Comparação e exibição dos resultados
    printf("\nComparação de Cartas: \n");
    printf("População: carta %d venceu\n", populacao1 > populacao2 ? 1 : 2);
    printf("Area: carta %d venceu\n", area1 > area2 ? 1 : 2);
    printf("PIB: carta %d venceu\n", pib1 > pib2 ? 1 : 2);
    printf("Pontos turisticos: carta %d venceu\n", pontos_turisticos1 > pontos_turisticos2 ? 1 : 2);
    printf("Densidade populacional: carta %d venceu\n", densidade_populacional1 > densidade_populacional2 ? 1 : 2);
    printf("PIB per capita: carta %d venceu\n", pib_per_capita1 > pib_per_capita2 ? 1 : 2);
    printf("Super poder: carta %d venceu\n", super_poder1 > super_poder2 ? 1 : 2);

    return 0;
}
