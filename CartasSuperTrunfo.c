#include <stdio.h>

int main() {
printf("CADASTRO DE CARTAS!\n");

//VARIAVES DAS CARTAS 01 E 02
char estado, estado2; //Declara as variaveis de caractere chamada "estado e estado2"
char codigo[20], codigo2[20]; //Declara um array de 20 caracteres e inicia com "codigo e codigo2"
char cidade[20], cidade2[20]; //Declara um array de 20 caracteres e inicia com "cidade e cidade2"
int populacao, populacao2; //Declara a variavel chamada "populacao
float area, area2; //Declara duas variaves de ponto flutuante chamada "area e area2"
float pib, pib2; //Declara duas variaves de ponto flutuante chamada "pib e pib2"
int turismo, turismo2; //Declara as variaveis inteira chamada "turismo e turismo2"
float densidade,densidade2;
float PIB,PIB2; // per capita
printf ("CARTA 01: \n"); //Titulo da carta 01

//ENTRADA DE DADOS DA CARTA 01
printf("digite o estado: \n"); //exibir a informacao "digite o estado" como a funcao "printf"
scanf(" %c", &estado); //scanf da variavel estado

printf("digite o codigo: \n"); //exibir a informacao "digite o codigo" como a funcao "printf"
scanf(" %s", codigo); //scanf da variavel codigo

printf("digite o nome da cidade: \n"); //exibir a informacao "digite o nome da cidade" como a funcao "printf"
scanf("%s", cidade); //scanf da variavel cidade

printf("digite o valor populacional: \n"); //exibir a informacao "digite o valor populacional" como a funcao "printf"
scanf("%d", &populacao); //scanf da variavel populacao

printf("digite a area em km²: \n"); //exibir a informacao "digite a area em km²" como a funcao "printf"
scanf("%f", &area); //scanf da variavel area

printf("digite o PIB: \n"); //exibir a informacao "digite o pib" como a funcao "printf"
scanf("%f", &pib); //scanf da variavel pib

printf("turismo: \n");//exibir a informacao "turismo" como a funcao "printf"
scanf(" %d", &turismo); //scanf da variavel turismo
densidade2 = (float)populacao2 / area2;
PIB2 = (pib2 * 1000000000.0) / populacao2; // corrigido

//Titulo da carta 02
printf ("CARTA 02: \n");

//ENTRADA DE DADOS DA CARTA 01
printf("digite o estado: \n");
scanf(" %c", &estado2);

printf("digite o codigo: \n");
scanf(" %s", codigo2);

printf("digite o nome da cidade: \n");
scanf(" %s", cidade2);

printf("digite o valor populacional: \n");
scanf("%d", &populacao2);

printf("digite a area em km²: \n");
scanf("%f", &area2);

printf("digite o PIB: \n");
scanf("%f", &pib2);

printf("turismo: \n");
scanf(" %d", &turismo2);
densidade2 = (float)populacao2 / area2;
PIB2 = (pib2 * 1000000000.0) / populacao2; // corrigido

printf ("\n===== RESULTADOS =====\n");

//SAINDA DE DADOS DA CARTA 1
printf ("CARTA 1: \n");
printf("Estado: %c \n", estado);
printf("Código: %s \n", codigo);
printf("Nome da Cidade: %s \n", cidade);
printf("População: %d \n", populacao);
printf("Area em Km²: %.2f \n", area);
printf("PIB: %.2f \n", pib);
printf("Turismo: %d \n", turismo);
printf("Densidade populacional: %.2f hab/km²\n", densidade);
printf("PIB per Capita: %.2f reais\n", PIB);

//SAIDA DE DADOS DA CARTA 2
printf ("CARTA 2: \n");
printf("Estado: %c \n", estado2);
printf("Código: %s \n", codigo2);
printf("Nome da Cidade: %s \n", cidade2);
printf("População: %d \n", populacao2);
printf("Area em Km²: %.2f \n", area2);
printf("PIB: %.2f \n", pib2);
printf("Turismo: %d \n", turismo2);
printf("Densidade populacional: %.2f hab/km²\n", densidade2);
printf("PIB per Capita: %.2f reais\n", PIB2);

return 0;
}