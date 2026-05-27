#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades

    // Carta 1
    char estado1[50];
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float capita1;
    float superpoder1;

    // Carta 2
    char estado2[50];
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float capita2;
    float superpoder2;

    // Cadastro das Cartas:

    // Entrada de dados da Carta 1
    printf("Digite o Estado da Carta 1: ");
    scanf(" %s", &estado1);

    printf("Digite o codigo da Carta 1 (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da Carta 1: ");
    scanf("%s", cidade1);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    densidade1 = populacao1 / area1;
    capita1 = pib1 / populacao1;
    superpoder1 = (float) populacao1 + area1 + pib1 + pontosTuristicos1 + capita1 + (1.0f / densidade1); 

    // Entrada de dados da Carta 2
    printf("\nDigite o Estado da Carta 2: ");
    scanf(" %s", &estado2);

    printf("Digite o codigo da Carta 2 (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da Carta 2: ");
    scanf("%s", cidade2);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = populacao2 / area2;
    capita2 = pib2 / populacao2;
    superpoder2 = (float) populacao2 + area2 + pib2 + pontosTuristicos2 + capita2 - + (1.0f / densidade2);

    printf("\n");

    // Comparação de Cartas:

    printf("Comparação de Cartas (Atributo: Densidade Populacional)\n");

    printf("\n");

    if (densidade1 < densidade2) {
        printf("Carta 1 - %s (%s): %.2f \n", cidade1, estado1, densidade1);
        printf("Carta 2 - %s (%s): %.2f \n", cidade2, estado2, densidade2);
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Carta 1 - %s (%s): %.2f \n", cidade1, estado1, densidade1);
        printf("Carta 2 - %s (%s): %.2f \n", cidade2, estado2, densidade2);
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    printf("\n");
   
    return 0;
}
