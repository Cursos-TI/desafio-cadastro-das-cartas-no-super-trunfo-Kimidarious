#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

int main()
{
    
     // Atributos da carta 1 (Brasil)
     char nome1[] = "Brasil";
     int populacao1 = 213000000;
     int area1 = 8515767;
     int densidade1 = 25;
     int pib1 = 22000;
 
     // Atributos da carta 2 (Japão)
     char nome2[] = "Japao";
     int populacao2 = 125800000;
     int area2 = 377975;
     int densidade2 = 347;
     int pib2 = 50000;
 
     int atributo1, atributo2;
     int valor1_c1, valor2_c1, valor1_c2, valor2_c2;
     int soma1, soma2;
 
     printf("Comparacao entre duas cartas:\n");
     printf("1 - Populacao\n");
     printf("2 - Area\n");
     printf("3 - Densidade Demografica\n");
     printf("4 - PIB\n");
 
     // Escolha do primeiro atributo
     printf("Escolha o primeiro atributo (1 a 4): ");
     scanf("%d", &atributo1);
 
     // Escolha do segundo atributo (não pode ser igual ao primeiro)
     printf("Escolha o segundo atributo (diferente do primeiro): ");
     scanf("%d", &atributo2);
 
     // Se atributos forem iguais, força o segundo a ser diferente
     if (atributo1 == atributo2)
     {
         printf("Voce escolheu o mesmo atributo duas vezes. Tente novamente.\n");
         return 1;
     }
 
     // Obter valor para carta 1
     switch (atributo1)
     {
     case 1:
         valor1_c1 = populacao1;
         break;
     case 2:
         valor1_c1 = area1;
         break;
     case 3:
         valor1_c1 = densidade1;
         break;
     case 4:
         valor1_c1 = pib1;
         break;
     default:
         valor1_c1 = 0;
     }
 
     switch (atributo2)
     {
     case 1:
         valor2_c1 = populacao1;
         break;
     case 2:
         valor2_c1 = area1;
         break;
     case 3:
         valor2_c1 = densidade1;
         break;
     case 4:
         valor2_c1 = pib1;
         break;
     default:
         valor2_c1 = 0;
     }
 
     // Obter valor para carta 2
     switch (atributo1)
     {
     case 1:
         valor1_c2 = populacao2;
         break;
     case 2:
         valor1_c2 = area2;
         break;
     case 3:
         valor1_c2 = densidade2;
         break;
     case 4:
         valor1_c2 = pib2;
         break;
     default:
         valor1_c2 = 0;
     }
 
     switch (atributo2)
     {
     case 1:
         valor2_c2 = populacao2;
         break;
     case 2:
         valor2_c2 = area2;
         break;
     case 3:
         valor2_c2 = densidade2;
         break;
     case 4:
         valor2_c2 = pib2;
         break;
     default:
         valor2_c2 = 0;
     }
 
     // Soma dos dois atributos
     soma1 = valor1_c1 + valor2_c1;
     soma2 = valor1_c2 + valor2_c2;
 
     // Mostrar valores usados
     printf("\n--- COMPARACAO ---\n");
     printf("%s: %d + %d = %d\n", nome1, valor1_c1, valor2_c1, soma1);
     printf("%s: %d + %d = %d\n", nome2, valor1_c2, valor2_c2, soma2);
 
     // Comparação
     if (soma1 > soma2)
     {
         printf("\n%s venceu!\n", nome1);
     }
     else if (soma2 > soma1)
     {
         printf("\n%s venceu!\n", nome2);
     }
     else
     {
         printf("\nEmpate!\n");
     }
 
     return 0;
}
