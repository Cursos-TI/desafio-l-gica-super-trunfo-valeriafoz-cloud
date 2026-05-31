#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    int opcao1, opcao2;

    // Carta 1
    char pais1[50];
    float populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;

    // Carta 2
    char pais2[50];
    float populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;

    // Cadastro das Cartas:

    // Entrada de dados da Carta 1
    printf("Digite o nome do País da Carta 1: ");
    scanf("%s", pais1);

    printf("Digite a população do País: ");
    scanf("%f", &populacao1);

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
    scanf("%f", &populacao2);

    printf("Digite a area do País (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB do País: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = populacao2 / area2;
   
    printf("\n");

    // Comparação de Cartas 1 :
    printf("**Escolha o primeiro atributo de comparação:**\n");
    printf("1. População do País\n");
    printf("2. Área do País\n");
    printf("3. PIB do País\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    scanf("%d", &opcao1);

    float atributopopul1, atributoarea1, atributopib1, atributotur1, atributodens1;
    int atributopopul2, atributoarea2, atributopib2, atributotur2, atributodens2;

    switch (opcao1)
    {
    case 1: atributopopul1 = populacao1 > populacao2 ? 1 : 2; break;
    case 2: atributoarea1 = area1 > area2 ? 1 : 2; break;    
    case 3: atributopib1 = pib1 > pib2 ? 1 : 2; break;  
    case 4: atributotur1 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 2; break;    
    case 5: atributodens1 = densidade1 < densidade2 ? 1 : 2; break;  
        default:
        printf("Opção de Atributo não disponível.\n");
        break;
    }
     printf("\n");
        // Comparação de Cartas 2 :
    // Menu dinâmico para segundo atributo

printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i != opcao1) {
            switch (i) {
                case 1: printf("1. População do País\n"); break;
                case 2: printf("2. Área do País\n"); break;
                case 3: printf("3. PIB do País\n"); break;
                case 4: printf("4. Pontos Turísticos\n"); break;
                case 5: printf("5. Densidade Populacional\n"); break;
            }
        }
    }
    scanf("%d", &opcao2);

switch (opcao2){
    case 1: atributopopul2 = populacao1 > populacao2  ? 1 : 2; break;  
    case 2: atributoarea2 = area1 > area2  ? 1 : 2; break;  
    case 3: atributopib2 = pib1 > pib2  ? 1 : 2; break;  
    case 4: atributotur2 = pontosTuristicos1 > pontosTuristicos2  ? 1 : 2; break;  
    case 5: atributodens1 = densidade1 < densidade2  ? 1 : 2; break;    
        default:
        printf("Opção de Atributo não disponível.\n");
        break;
    }

    if (atributopopul1 == 1 && atributoarea2 == 1 ) {
        printf("%s, com atributo População: %.2f e atributo Área %.2f.\n", pais1, populacao1, area1);
        printf("%s, com atributo População: %.2f e atributo Área %.2f.\n", pais2, populacao2, area2);
        printf("Vence %s.\n", pais1);
    } else if (atributopopul1 == 2 && atributoarea2 == 2) {
        printf("%s, com atributo População: %.2f e atributo Área %.2f.\n", pais1, populacao1, area1);
        printf("%s, com atributo População: %.2f e atributo Área %.2f.\n", pais2, populacao2, area2);
        printf("Vence %s.\n", pais2);
    } else if (atributopopul1 == 1 && atributopib2 == 1) {
        printf("%s, com atributo População: %.2f e atributo PIB %.2f.\n", pais1, populacao1, pib1);
        printf("%s, com atributo População: %.2f e atributo PIB %.2f.\n", pais2, populacao2, pib2);
        printf("Vence %s.\n", pais1);
    } else if (atributopopul1 == 2 && atributopib2 == 2) {
        printf("%s, com atributo População: %.2f e atributo PIB %.2f.\n", pais1, populacao1, pib1);
        printf("%s, com atributo População: %.2f e atributo PIB %.2f.\n", pais2, populacao2, pib2);
        printf("Vence %s.\n", pais2);
    } else if (atributopopul1 == 1 && atributotur2 == 1) {
        printf("%s, com atributo População: %.2f e atributo Pontos Turísticos %d .\n", pais1, populacao1, pontosTuristicos1);
        printf("%s, com atributo População: %.2f e atributo Pontos Turísticos %d .\n", pais2, populacao2, pontosTuristicos2);
        printf("Vence %s.\n", pais1);
    } else if (atributopopul1 == 2 && atributotur2 == 2) {
        printf("%s, com atributo População: %.2f e atributo Pontos Turísticos %d .\n", pais1, populacao1, pontosTuristicos1);
        printf("%s, com atributo População: %.2f e atributo Pontos Turísticos %d .\n", pais2, populacao2, pontosTuristicos2);
        printf("Vence %s.\n", pais2);
    } else if (atributopopul1 == 1 && atributodens2 == 1) {
        printf("%s, com atributo População: %.2f e atributo Densidade Populacional %.2f.\n", pais1, populacao1, densidade1);
        printf("%s, com atributo População: %.2f e atributo Densidade Populacional %.2f.\n", pais2, populacao2, densidade2);
        printf("Vence %s.\n", pais1);
    } else if (atributopopul1 == 2 && atributodens2 == 2) {
        printf("%s, com atributo População: %.2f e atributo Densidade Populacional %.2f.\n", pais1, populacao1, densidade1);
        printf("%s, com atributo População: %.2f e atributo Densidade Populacional %.2f.\n", pais2, populacao2, densidade2);
        printf("Vence %s.\n", pais2);
    } else if (atributoarea1 == 1 && atributopopul2 == 1 ) {
        printf("%s, com atributo Área: %.2f e atributo População %.2f.\n", pais1, area1, populacao1);
        printf("%s, com atributo Área: %.2f e atributo População %.2f.\n", pais2, area2, populacao2);
        printf("Vence %s.\n", pais1);
    } else if (atributoarea1 == 2 && atributopopul2 == 2) {
        printf("%s, com atributo Área: %.2f e atributo População %.2f.\n", pais1, area1, populacao1);
        printf("%s, com atributo Área: %.2f e atributo População %.2f.\n", pais2, area2, populacao2);
        printf("Vence %s.\n", pais2);
    } else if (atributoarea1 == 1 && atributopib2 == 1) {
        printf("%s, com atributo Área: %.2f e atributo PIB %.2f.\n", pais1, area1, pib1);
        printf("%s, com atributo Área: %.2f e atributo PIB %.2f.\n", pais2, area2, pib2);
        printf("Vence %s.\n", pais1);
    } else if (atributoarea1 == 2 && atributopib2 == 2) {
        printf("%s, com atributo Área: %.2f e atributo PIB %.2f.\n", pais1, area1, pib1);
        printf("%s, com atributo Área: %.2f e atributo PIB %.2f.\n", pais2, area2, pib2);
        printf("Vence %s.\n", pais2);
    } else if (atributoarea1 == 1 && atributotur2 == 1) {
        printf("%s, com atributo Área: %.2f e atributo Pontos Turísticos %d.\n", pais1, area1, pontosTuristicos1);
        printf("%s, com atributo Área: %.2f e atributo Pontos Turísticos %d.\n", pais2, area2, pontosTuristicos2);
        printf("Vence %s.\n", pais1);
    } else if (atributoarea1 == 2 && atributotur2 == 2) {
        printf("%s, com atributo Área: %.2f e atributo Pontos Turísticos %d.\n", pais1, area1, pontosTuristicos1);
        printf("%s, com atributo Área: %.2f e atributo Pontos Turísticos %d.\n", pais2, area2, pontosTuristicos2);
        printf("Vence %s.\n", pais2);
    } else if (atributoarea1 == 1 && atributodens2 == 1) {
        printf("%s, com atributo Área: %.2f e atributo Densidade Populacional %.2f.\n", pais1, area1, densidade1);
        printf("%s, com atributo Área: %.2f e atributo Densidade Populacional %.2f.\n", pais2, area2, densidade2);
        printf("Vence %s.\n", pais1);
    } else if (atributoarea1 == 2 && atributodens2 == 2) {
        printf("%s, com atributo Área: %.2f e atributo Densidade Populacional %.2f.\n", pais1, area1, densidade1);
        printf("%s, com atributo Área: %.2f e atributo Densidade Populacional %.2f.\n", pais2, area2, densidade2);
        printf("Vence %s.\n", pais2);
    } else if (atributopib1 == 1 && atributopopul2 == 1 ) {
        printf("%s, com atributo PIB: %.2f e atributo População %.2f.\n", pais1, pib1, populacao1);
        printf("%s, com atributo PIB: %.2f e atributo População %.2f.\n", pais2, pib2, populacao2);
        printf("Vence %s.\n", pais1);
    } else if (atributopib1 == 2 && atributopopul2 == 2) {
        printf("%s, com atributo PIB: %.2f e atributo População %.2f.\n", pais1, pib1, populacao1);
        printf("%s, com atributo PIB: %.2f e atributo População %.2f.\n", pais2, pib2, populacao2);
        printf("Vence %s.\n", pais2);
    } else if (atributopib1 == 1 && atributoarea2 == 1) {
        printf("%s, com atributo PIB: %.2f e atributo Área %.2f.\n", pais1, pib1, area1);
        printf("%s, com atributo PIB: %.2f e atributo Área %.2f.\n", pais2, pib2, area2);
        printf("Vence %s.\n", pais1);
    } else if (atributopib1 == 2 && atributoarea2 == 2) {
        printf("%s, com atributo PIB: %.2f e atributo Área %.2f.\n", pais1, pib1, area1);
        printf("%s, com atributo PIB: %.2f e atributo Área %.2f.\n", pais2, pib2, area2);
        printf("Vence %s.\n", pais2);
    } else if (atributopib1 == 1 && atributotur2 == 1) {
        printf("%s, com atributo PIB: %.2f e atributo Pontos Turísticos %d .\n", pais1, pib1, pontosTuristicos1);
        printf("%s, com atributo PIB: %.2f e atributo Pontos Turísticos %d .\n", pais2, pib2, pontosTuristicos2);
        printf("Vence %s.\n", pais1);
    } else if (atributopib1 == 2 && atributotur2 == 2) {
        printf("%s, com atributo PIB: %.2f e atributo Pontos Turísticos %d .\n", pais1, pib1, pontosTuristicos1);
        printf("%s, com atributo PIB: %.2f e atributo Pontos Turísticos %d .\n", pais2, pib2, pontosTuristicos2);
        printf("Vence %s.\n", pais2);
    } else if (atributopib1 == 1 && atributodens2 == 1) {
        printf("%s, com atributo PIB: %.2f e atributo Densidade Populacional %.2f.\n", pais1, pib1, densidade1);
        printf("%s, com atributo PIB: %.2f e atributo Densidade Populacional %.2f.\n", pais2, pib2, densidade2);
        printf("Vence %s.\n", pais1);
    } else if (atributopib1 == 2 && atributodens2 == 2) {
        printf("%s, com atributo PIB: %.2f e atributo Densidade Populacional %.2f.\n", pais1, pib1, densidade1);
        printf("%s, com atributo PIB: %.2f e atributo Densidade Populacional %.2f.\n", pais2, pib2, densidade2);
        printf("Vence %s.\n", pais2);
    } else if (atributotur1 == 1 && atributopopul2 == 1 ) {
        printf("%s, com atributo Pontos Turísticos: %d e atributo População %.2f.\n", pais1, pontosTuristicos1, populacao1);
        printf("%s, com atributo Pontos Turísticos: %d e atributo População %.2f.\n", pais2, pontosTuristicos2, populacao2);
        printf("Vence %s.\n", pais1);
    } else if (atributotur1 == 2 && atributopopul2 == 2) {
        printf("%s, com atributo Pontos Turísticos: %d e atributo População %.2f.\n", pais1, pontosTuristicos1, populacao1);
        printf("%s, com atributo Pontos Turísticos: %d e atributo População %.2f.\n", pais2, pontosTuristicos2, populacao2);
        printf("Vence %s.\n", pais2);
    } else if (atributotur1 == 1 && atributoarea2 == 1) {
        printf("%s, com atributo Pontos Turísticos: %d e atributo Área %.2f.\n", pais1, pontosTuristicos1, area1);
        printf("%s, com atributo Pontos Turísticos: %d e atributo Área %.2f.\n", pais2, pontosTuristicos2, area2);
        printf("Vence %s.\n", pais1);
    } else if (atributotur1 == 2 && atributoarea2 == 2) {
        printf("%s, com atributo Pontos Turísticos: %d e atributo Área %.2f.\n", pais1, pontosTuristicos1, area1);
        printf("%s, com atributo Pontos Turísticos: %d e atributo Área %.2f.\n", pais2, pontosTuristicos2, area2);
        printf("Vence %s.\n", pais2);
    } else if (atributotur1 == 1 && atributopib2 == 1) {
        printf("%s, com atributo Pontos Turísticos: %d e atributo PIB %.2f.\n", pais1, pontosTuristicos1, pib1);
        printf("%s, com atributo Pontos Turísticos: %d e atributo PIB %.2f.\n", pais2, pontosTuristicos2, pib2);
        printf("Vence %s.\n", pais1);
    } else if (atributotur1 == 2 && atributopib2 == 2) {
        printf("%s, com atributo Pontos Turísticos: %d e atributo PIB %.2f.\n", pais1, pontosTuristicos1, pib1);
        printf("%s, com atributo Pontos Turísticos: %d e atributo PIB %.2f.\n", pais2, pontosTuristicos2, pib2);
        printf("Vence %s.\n", pais2);
    } else if (atributotur1 == 1 && atributodens2 == 1) {
        printf("%s, com atributo Pontos Turísticos: %d e atributo Densidade Populacional %.2f.\n", pais1, pontosTuristicos1, densidade1);
        printf("%s, com atributo Pontos Turísticos: %d e atributo Densidade Populacional %.2f.\n", pais2, pontosTuristicos2, densidade2);
        printf("Vence %s.\n", pais1);
    } else if (atributotur1 == 2 && atributodens2 == 2) {
        printf("%s, com atributo Pontos Turísticos: %d e atributo Densidade Populacional %.2f.\n", pais1, pontosTuristicos1, densidade1);
        printf("%s, com atributo Pontos Turísticos: %d e atributo Densidade Populacional %.2f.\n", pais2, pontosTuristicos2, densidade2);
        printf("Vence %s.\n", pais2);
    } else if (atributodens1 == 1 && atributopopul2 == 1 ) {
        printf("%s, com atributo Densidade Populacional: %.2f e atributo População %.2f.\n", pais1, densidade1, populacao1);
        printf("%s, com atributo Densidade Populacional: %.2f e atributo População %.2f.\n", pais2, densidade2, populacao2);
        printf("Vence %s.\n", pais1);
    } else if (atributodens1 == 2 && atributopopul2 == 2) {
        printf("%s, com atributo Densidade Populacional: %.2f e atributo População %.2f.\n", pais1, densidade1, populacao1);
        printf("%s, com atributo Densidade Populacional: %.2f e atributo População %.2f.\n", pais2, densidade2, populacao2);
        printf("Vence %s.\n", pais2);
    } else if (atributodens1 == 1 && atributoarea2 == 1) {
        printf("%s, com atributo Densidade Populacional: %.2f e atributo Área %.2f.\n", pais1, densidade1, area1);
        printf("%s, com atributo Densidade Populacional: %.2f e atributo Área %.2f.\n", pais2, densidade2, area2);
        printf("Vence %s.\n", pais1);
    } else if (atributodens1 == 2 && atributoarea2 == 2) {
        printf("%s, com atributo Densidade Populacional: %.2f e atributo Área %.2f.\n", pais1, densidade1, area1);
        printf("%s, com atributo Densidade Populacional: %.2f e atributo Área %.2f.\n", pais2, densidade2, area2);
        printf("Vence %s.\n", pais2);
    } else if (atributodens1 == 1 && atributopib2 == 1) {
        printf("%s, com atributo Densidade Populacional: %.2f e atributo PIB %.2f.\n", pais1, densidade1, pib1);
        printf("%s, com atributo Densidade Populacional: %.2f e atributo PIB %.2f.\n", pais2, densidade2, pib2);
        printf("Vence %s.\n", pais1);
    } else if (atributodens1 == 2 && atributopib2 == 2) {
        printf("%s, com atributo Densidade Populacional: %.2f e atributo PIB %.2f.\n", pais1, densidade1, pib1);
        printf("%s, com atributo Densidade Populacional: %.2f e atributo PIB %.2f.\n", pais2, densidade2, pib2);
        printf("Vence %s.\n", pais2);
    } else if (atributodens1 == 1 && atributotur2 == 1) {
        printf("%s, com atributo Densidade Populacional: %.2f e atributo Pontos Turísticos %d.\n", pais1, densidade1, pontosTuristicos1);
        printf("%s, com atributo Densidade Populacional: %.2f e atributo Pontos Turísticos %d.\n", pais2, densidade2, pontosTuristicos2);
        printf("Vence %s.\n", pais1);
    } else if (atributodens1 == 2 && atributotur2 == 2) {
        printf("%s, com atributo Densidade Populacional: %.2f e atributo Pontos Turísticos %d.\n", pais1, densidade1, pontosTuristicos1);
        printf("%s, com atributo Densidade Populacional: %.2f e atributo Pontos Turísticos %d.\n", pais2, densidade2, pontosTuristicos2);
        printf("Vence %s.\n", pais2);
    } else {    
        printf("%s e %s empataram!\n", pais1, pais2);
    }


    return 0;
}
