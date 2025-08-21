#include <stdio.h>

int main() {
printf("CADASTRO DE CARTAS!\n");

char estado, estado2;
char codigo[20], codigo2[20];
char cidade[20], cidade2[20];
int populacao, populacao2;
float area, area2;
float pib, pib2;
int turismo, turismo2;

printf ("CARTA 01: \n");

printf("digite o estado: \n");
scanf(" %c", &estado);

printf("digite o codigo: \n");
scanf(" %s", codigo);

printf("digite o nome da cidade: \n");
scanf("%s", cidade);

printf("digite o valor populacional: \n");
scanf("%d", &populacao);

printf("diga a area em km²: \n");
scanf("%f", &area);

printf("digite o PIB: \n");
scanf("%f", &pib);

printf("turismo: \n");
scanf(" %d", &turismo);



printf ("CARTA 02: \n");

printf("digite o estado: \n");
scanf(" %c", &estado2);

printf("digite o codigo: \n");
scanf(" %s", codigo2);

printf("digite o nome da cidade: \n");
scanf(" %s", cidade2);

printf("digite o valor populacional: \n");
scanf("%d", &populacao2);

printf("diga a area em km²: \n");
scanf("%f", &area2);

printf("digite o PIB: \n");
scanf("%f", &pib2);

printf("turismo: \n");
scanf(" %d", &turismo2);

printf ("CARTA 1: \n");
printf("Estado: %c \n", estado);
printf("Código: %s \n", codigo);
printf("Nome da Cidade: %s \n", cidade);
printf("População: %d \n", populacao);
printf("Area em Km²: %.2f \n", area);
printf("PIB: %.2f \n", pib);
printf("Turismo: %d \n", turismo);

printf ("CARTA 2: \n");
printf("Estado: %c \n", estado2);
printf("Código: %s \n", codigo2);
printf("Nome da Cidade: %s \n", cidade2);
printf("População: %d \n", populacao2);
printf("Area em Km²: %.2f \n", area2);
printf("PIB: %.2f \n", pib2);
printf("Turismo: %d \n", turismo2);

return 0;
}