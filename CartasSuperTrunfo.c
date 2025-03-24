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
    scanf(" %[^\n]s", nomeCidade1);

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
    scanf(" %[^\n]s", nomeCidade2);

    printf("Digite a população: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos2);

    // Cálculos
    if (area1 > 0)
    {
        densidade_populacional1 = populacao1 / area1;
    }

    if (area2 > 0)
    {
        densidade_populacional2 = populacao2 / area2;
    }

    if (populacao1 > 0)
    {
        pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    }

    if (populacao2 > 0)
    {
        pib_per_capita2 = (pib2 * 1000000000) / populacao2;
    }

    // Cálculo do Super Poder
    if (densidade_populacional1 > 0)
    {
        super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1.0 / densidade_populacional1);
    }
    else
    {
        super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1;
    }

    if (densidade_populacional2 > 0)
    {
        super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade_populacional2);
    }
    else
    {
        super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2;
    }

    // Escolha do atributo para a comparação (pode ser alterado diretamente no código)
    int atributo = 1; // 1 = populacao, 2 = area, 3 = pib, 4 = pontos turisticos, 5 = densidade populacional, 6 = pib per capita, 7 = super poder

    // Comparação e exibição dos resultados
    if (atributo == 1)
    {
        printf("Atributo: População\n");
        printf("Carta 1 %s (%s) %lu\n", nomeCidade1, estado1, populacao1);
        printf("Carta 2 %s (%s) %lu\n", nomeCidade2, estado2, populacao2);
        if (populacao1 > populacao2)
        {
            printf("Resultado: Carta 1 venceu!\n");
        }
        else
        {
            printf("Resultado: Carta 2 venceu!\n");
        }
    }
    else if (atributo == 2)
    {
        printf("Atributo: Área\n");
        printf("Carta 1 %s (%s) %.2f km²\n", nomeCidade1, estado1, area1);
        printf("Carta 2 %s (%s) %.2f km²\n", nomeCidade2, estado2, area2);
        if (area1 > area2)
        {
            printf("Resultado: Carta 1 venceu!\n");
        }
        else
        {
            printf("Resultado: Carta 2 venceu!\n");
        }
    }
    else if (atributo == 3)
    {
        printf("Atributo: PIB\n");
        printf("Carta 1 %s (%s) R$ %.2f bilhões de reais\n", nomeCidade1, estado1, pib1);
        printf("Carta 2 %s (%s) R$ %.2f bilhões de reais\n", nomeCidade2, estado2, pib2);
        if (pib1 > pib2)
        {
            printf("Resultado: Carta 1 venceu!\n");
        }
        else
        {
            printf("Resultado: Carta 2 venceu!\n");
        }
    }
    else if (atributo == 4)
    {
        printf("Atributo: Pontos Turisticos\n");
        printf("Carta 1 %s (%s) %d pontos\n", nomeCidade1, estado1, pontos_turisticos1);
        printf("Carta 2 %s (%s) %d pontos\n", nomeCidade2, estado2, pontos_turisticos2);
        if (pontos_turisticos1 > pontos_turisticos2)
        {
            printf("Resultado: Carta 1 venceu!\n");
        }
        else
        {
            printf("Resultado: Carta 2 venceu!\n");
        }
    }
    else if (atributo == 5)
    {
        printf("Atributo: Densidade Populacional\n");
        printf("Carta 1 %s (%s) %.2f hab/km²\n", nomeCidade1, estado1, densidade_populacional1);
        printf("Carta 2 %s (%s) %.2f hab/km²\n", nomeCidade2, estado2, densidade_populacional2);
        if (densidade_populacional1 > densidade_populacional2)
        {
            printf("Resultado: Carta 1 venceu!\n");
        }
        else
        {
            printf("Resultado: Carta 2 venceu!\n");
        }
    }
    else if (atributo == 6)
    {
        printf("Atributo: PIB per Capita\n");
        printf("Carta 1 %s (%s) R$ %.2f reais\n", nomeCidade1, estado1, pib_per_capita1);
        printf("Carta 2 %s (%s) R$ %.2f reais\n", nomeCidade2, estado2, pib_per_capita2);
        if (pib_per_capita1 > pib_per_capita2)
        {
            printf("Resultado: Carta 1 venceu!\n");
        }
        else
        {
            printf("Resultado: Carta 2 venceu!\n");
        }
    }
    else
    {
        printf("Atributo Inválido\n");
    }

    return 0;
}
