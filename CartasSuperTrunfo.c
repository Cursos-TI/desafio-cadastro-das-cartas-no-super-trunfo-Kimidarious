#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

int main()
{
    
    // Estrutura para armazenar os dados das cartas
    char nome1[50] = "Brasil";
    int populacao1 = 211000000;
    float area1 = 8515767.0;
    float pib1 = 1.84;
    int pontosTuristicos1 = 5;
    float densidade1 = populacao1 / area1;

    char nome2[50] = "Portugal";
    int populacao2 = 10280000;
    float area2 = 92212.0;
    float pib2 = 0.25;
    int pontosTuristicos2 = 3;
    float densidade2 = populacao2 / area2;

    int opcao;

    // Menu interativo com switch
    printf("===== SUPER TRUNFO - Comparador de Países =====\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    printf("\nComparando %s e %s...\n", nome1, nome2);

    switch (opcao)
    {
    case 1:
        printf("População:\n");
        printf("%s: %d\n", nome1, populacao1);
        printf("%s: %d\n", nome2, populacao2);
        if (populacao1 > populacao2)
        {
            printf("Vencedor: %s\n", nome1);
        }
        else if (populacao2 > populacao1)
        {
            printf("Vencedor: %s\n", nome2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;
    case 2:
        printf("Área:\n");
        printf("%s: %.2f km²\n", nome1, area1);
        printf("%s: %.2f km²\n", nome2, area2);
        if (area1 > area2)
        {
            printf("Vencedor: %s\n", nome1);
        }
        else if (area2 > area1)
        {
            printf("Vencedor: %s\n", nome2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;
    case 3:
        printf("PIB:\n");
        printf("%s: US$ %.2f trilhões\n", nome1, pib1);
        printf("%s: US$ %.2f trilhões\n", nome2, pib2);
        if (pib1 > pib2)
        {
            printf("Vencedor: %s\n", nome1);
        }
        else if (pib2 > pib1)
        {
            printf("Vencedor: %s\n", nome2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;
    case 4:
        printf("Pontos Turísticos:\n");
        printf("%s: %d\n", nome1, pontosTuristicos1);
        printf("%s: %d\n", nome2, pontosTuristicos2);
        if (pontosTuristicos1 > pontosTuristicos2)
        {
            printf("Vencedor: %s\n", nome1);
        }
        else if (pontosTuristicos2 > pontosTuristicos1)
        {
            printf("Vencedor: %s\n", nome2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;
    case 5:
        printf("Densidade Demográfica:\n");
        printf("%s: %.2f hab/km²\n", nome1, densidade1);
        printf("%s: %.2f hab/km²\n", nome2, densidade2);
        if (densidade1 < densidade2)
        {
            printf("Vencedor: %s (menor densidade)\n", nome1);
        }
        else if (densidade2 < densidade1)
        {
            printf("Vencedor: %s (menor densidade)\n", nome2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;
    default:
        printf("Opção inválida. Por favor, selecione um número entre 1 e 5.\n");
        break;
    }

    return 0;
}
