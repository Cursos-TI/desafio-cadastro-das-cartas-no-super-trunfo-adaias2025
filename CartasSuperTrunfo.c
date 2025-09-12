#include <stdio.h>

int main (){

    char estado, estado2;
    char codigo[20], codigo2[20];
    char cidade[50], cidade2[50];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2; // em bilhões
    int turismo, turismo2;
    float densidade,densidade2;
    float PIB,PIB2; // per capita

    printf ("CARTA 01: \n");

    printf("Digite o estado: \n");
    scanf(" %c", &estado);

    printf("Digite o codigo: \n");
    scanf(" %s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);

    printf("Digite o valor populacional: \n");
    scanf("%d", &populacao);

    printf("Digite a area em km²: \n");
    scanf("%f", &area);

    printf("Digite o PIB (em bilhões): \n");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &turismo);

    densidade = (float)populacao / area;
    PIB = (pib * 1000000000.0) / populacao; // corrigido

    printf ("\nCARTA 02: \n");

    printf("Digite o estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o codigo: \n");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite o valor populacional: \n");
    scanf("%d", &populacao2);

    printf("Digite a area em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões): \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &turismo2);

    densidade2 = (float)populacao2 / area2;
    PIB2 = (pib2 * 1000000000.0) / populacao2; // corrigido

    printf ("\n===== RESULTADOS =====\n");

    printf ("CARTA 1: \n");
    printf("Estado: %c \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    //printf("Area: %.2f km²\n", area);

    printf("Área em Km²: %.2f \n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Turismo: %d \n", turismo);
    printf("Densidade populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n", PIB);

    printf ("\nCARTA 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área em Km²: %.2f \n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Turismo: %d \n", turismo2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", PIB2);

    return 0;
}