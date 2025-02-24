#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    //definindo as variáveis
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    //monta a primeira carta
    printf("----------MONTE A PRIMEIRA CARTA----------\n");
    printf("Informe a letra que representa o estado: ");
    scanf("%c", &estado1); //armazena a letra do estado

    printf("\nInforme o código da carta: ");
    scanf("%s", &codigo1); //armazena o código da carta

    printf("\nInforme o nome da cidade: ");
    scanf("%s", &cidade1); //armazena o nome da cidade

    printf("\nInforme a população da cidade: ");
    scanf("%d", &populacao1); //armazena a população da cidade

    printf("\nInforme a área da cidade: ");
    scanf("%f", &area1); //armazena a área da cidade

    printf("\nInforme o PIB da cidade: ");
    scanf("%f", &pib1); //armazena o PIB da cidade

    printf("\nInforme a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontos1); //armazena a quantidade de pontos turísticos da cidade
    
    //exibe a primeira carta
    printf("\nPrimeira carta \nEstado: %c \nCódigo: %s \nNome da cidade: %s \nPopulação: %d", estado1, codigo1, cidade1, populacao1);
    printf("\nÁrea(km2): %.3f \nPIB: %.2f \nNúmero de pontos turísticos: %d \n", area1, pib1, pontos1);

    //monta a segunda carta
    printf("\n----------MONTE A SEGUNDA CARTA----------\n");
    printf("Informe a letra que representa o estado: ");
    scanf(" %c", &estado2); //armazena a letra do estado

    printf("\nInforme o código da carta: ");
    scanf("%s", &codigo2); //armazena o código da carta

    printf("\nInforme o nome da cidade: ");
    scanf("%s", &cidade2); //armazena o nome da cidade

    printf("\nInforme a população da cidade: ");
    scanf("%d", &populacao2); //armazena a população da cidade

    printf("\nInforme a área da cidade: ");
    scanf("%f", &area2); //armazena a área da cidade

    printf("\nInforme o PIB da cidade: ");
    scanf("%f", &pib2); //armazena o PIB da cidade

    printf("\nInforme a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontos2); //armazena a quantidade de pontos turísticos da cidade

    //exibe a segunda carta
    printf("\nSegunda carta \nEstado: %c \nCódigo: %s \nNome da cidade: %s \nPopulação: %d", estado2, codigo2, cidade2, populacao2);
    printf("\nÁrea(km²): %.3f \nPIB: %.2f \nNúmero de pontos turísticos: %d \n", area2, pib2, pontos2);

    return 0;
}
