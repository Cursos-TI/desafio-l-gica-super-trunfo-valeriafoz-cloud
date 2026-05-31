#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    int opcao;

    // Carta 1
    char pais1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;

    // Carta 2
    char pais2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;

    // Cadastro das Cartas:

    // Entrada de dados da Carta 1
    printf("Digite o nome do País da Carta 1: ");
    scanf("%s", pais1);

    printf("Digite a população do País: ");
    scanf("%d", &populacao1);

    printf("Digite a area do País (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB do País: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    densidade1 = populacao1 / area1;
    
    // Entrada de dados da Carta 2
    printf("\nDigite o nome do País da Carta 2: ");
    scanf("%s", pais2);

    printf("Digite a populacao do País: ");
    scanf("%d", &populacao2);

    printf("Digite a area do País (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB do País: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = populacao2 / area2;
   
    printf("\n");

    // Comparação de Cartas:
    printf("**Escolha o atributo de comparação:**\n");
    printf("1. População do País\n");
    printf("2. Área do País\n");
    printf("3. PIB do País\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        if (populacao1 > populacao2) {
        printf("Carta 1 - %s - Atributo População : %d \n", pais1, populacao1);
        printf("Carta 2 - %s - Atributo População : %d \n", pais2, populacao2);
        printf("Resultado: Carta 1 (%s) venceu!\n", pais1);
    } else if (populacao1 < populacao2){
        printf("Carta 1 - %s - Atributo População : %d \n", pais1, populacao1);
        printf("Carta 2 - %s - Atributo População : %d \n", pais2, populacao2);
        printf("Resultado: Carta 2 (%s) venceu!\n", pais2);
    }else
    {
        printf("Você empatou!\n");
    }
           break;
    case 2:
        if (area1 > area2) {
        printf("Carta 1 - %s - Atributo Área : %.2f \n", pais1, area1);
        printf("Carta 2 - %s - Atributo Área : %.2f \n", pais2, area2);
        printf("Resultado: Carta 1 (%s) venceu!\n", pais1);
    } else if (area1 < area2) {
        printf("Carta 1 - %s - Atributo Área : %.2f \n", pais1, area1);
        printf("Carta 2 - %s - Atributo Área : %.2f \n", pais2, area2);
        printf("Resultado: Carta 2 (%s) venceu!\n", pais2);
    } else {
        printf("Você empatou!\n");
    }
        break;    
    case 3:
        if (pib1 > pib2) {
        printf("Carta 1 - %s - Atributo PIB : %.2f \n", pais1, pib1);
        printf("Carta 2 - %s - Atributo PIB : %.2f \n", pais2, pib2);
        printf("Resultado: Carta 1 (%s) venceu!\n", pais1);
    } else if (pib1 < pib2) {
        printf("Carta 1 - %s - Atributo PIB : %.2f \n", pais1, pib1);
        printf("Carta 2 - %s - Atributo PIB : %.2f \n", pais2, pib2);
        printf("Resultado: Carta 2 (%s) venceu!\n", pais2);
    } else {
        printf("Você empatou!");
        }
        break;
    case 4:
        if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Carta 1 - %s - Atributo Pontos Turísticos : %d \n", pais1, pontosTuristicos1);
        printf("Carta 2 - %s - Atributo Pontos Turísticos : %d \n", pais2, pontosTuristicos2);
        printf("Resultado: Carta 1 (%s) venceu!\n", pais1);
    } else if (pontosTuristicos1 < pontosTuristicos2) {
        printf("Carta 1 - %s - Atributo Pontos Turísticos : %d \n", pais1, pontosTuristicos1);
        printf("Carta 2 - %s - Atributo Pontos Turísticos : %d \n", pais2, pontosTuristicos2);
        printf("Resultado: Carta 2 (%s) venceu!\n", pais2);
    } else {
        printf("Você empatou!");
        }
        break;  
    case 5:
        if (densidade1 < densidade2) {
        printf("Carta 1 - %s - Atributo Densidade Populacional: %.2f \n", pais1, densidade1);
        printf("Carta 2 - %s - Atributo Densidade Populacional: %.2f \n", pais2, densidade2);
        printf("Resultado: Carta 1 (%s) venceu!\n", pais1);
    } else if (densidade1 > densidade2) {
        printf("Carta 1 - %s - Atributo Densidade Populacional: %.2f \n", pais1, densidade1);
        printf("Carta 2 - %s - Atributo Densidade Populacional: %.2f \n", pais2, densidade2);
        printf("Resultado: Carta 2 (%s) venceu!\n", pais2);
    } else {
        printf("Você empatou!");
        }
        break;  
      
    default:
        printf("Opção de Atributo não disponível.\n");
        break;
    }

    
    printf("\n");
   
    return 0;
}
