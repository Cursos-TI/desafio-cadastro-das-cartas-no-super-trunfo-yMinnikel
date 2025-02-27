#include <stdio.h> 

int main(){
    
    //definindo as variáveis
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2, densidade1, densidade2;
    float pib1, pib2, pibPerCapita1, pibPerCapita2;
    int pontos1, pontos2;
    float superPoder1, superPoder2;
    int resPopulacao, resArea, resPib, resPontos, resDensidade, resPibPerCapita, resSuperPoder;

    //monta a primeira carta
    printf("----------MONTE A PRIMEIRA CARTA----------\n");
    printf("Informe a letra que representa o estado: ");
    scanf(" %c", &estado1); //armazena a letra do estado

    printf("Informe o código da carta: ");
    scanf(" %s", &codigo1); //armazena o código da carta

    printf("Informe o nome da cidade: ");
    scanf("%s", &cidade1); //armazena o nome da cidade

    printf("Informe a população da cidade: ");
    scanf("%lu", &populacao1); //armazena a população da cidade

    printf("Informe a área da cidade: ");
    scanf("%f", &area1); //armazena a área da cidade

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib1); //armazena o PIB da cidade

    printf("Informe a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontos1); //armazena a quantidade de pontos turísticos da cidade

    densidade1 = (float) populacao1 / area1; //calcula a densidade populacional
    pibPerCapita1 = (float) pib1 / populacao1; //calcula o PIB per capita
    superPoder1 = (float) populacao1 + area1 + pib1 + (float) pontos1 + pibPerCapita1 + (1/densidade1); //calcula o super poder da carta1

    //monta a segunda carta
    printf("\n----------MONTE A SEGUNDA CARTA----------\n");
    printf("Informe a letra que representa o estado: ");
    scanf(" %c", &estado2); //armazena a letra do estado

    printf("Informe o código da carta: ");
    scanf("%s", &codigo2); //armazena o código da carta

    printf("Informe o nome da cidade: ");
    scanf("%s", &cidade2); //armazena o nome da cidade

    printf("Informe a população da cidade: ");
    scanf("%lu", &populacao2); //armazena a população da cidade

    printf("Informe a área da cidade: ");
    scanf("%f", &area2); //armazena a área da cidade

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib2); //armazena o PIB da cidade

    printf("Informe a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontos2); //armazena a quantidade de pontos turísticos da cidade

    densidade2 = (float) populacao2 / area2; //calcula a densidade populacional
    pibPerCapita2 = (float) pib2 / populacao2; //calcula o PIB per capita
    superPoder2 = (float) populacao2 + area2 + pib2 + (float) pontos2 + pibPerCapita2 + (1/densidade2); //calcula o super poder da carta2

    //exibe a primeira carta
    printf("\nPrimeira carta \nEstado: %c \nCódigo: %s \nNome da cidade: %s \nPopulação: %lu", estado1, codigo1, cidade1, populacao1);
    printf("\nÁrea(km2): %.3f \nPIB: %.2f \nNúmero de pontos turísticos: %d", area1, pib1, pontos1);
    printf("\nDensidade populacional: %.2f \nPIB per capita: %.2f \nSuper poder: %.4f \n", densidade1, pibPerCapita1, superPoder1);

    //exibe a segunda carta
    printf("\nSegunda carta \nEstado: %c \nCódigo: %s \nNome da cidade: %s \nPopulação: %lu", estado2, codigo2, cidade2, populacao2);
    printf("\nÁrea(km²): %.3f \nPIB: %.2f \nNúmero de pontos turísticos: %d", area2, pib2, pontos2);
    printf("\nDensidade populacional: %.2f \nPIB per capita: %.2f \nSuper poder: %.4f", densidade2, pibPerCapita2, superPoder2);

    //compara as cartas
    resPopulacao = (populacao1 > populacao2);
    resArea = (area1 > area2);
    resPib = (pib1 > pib2);
    resPontos = (pontos1 > pontos2);
    resDensidade = (densidade1 < densidade2);
    resPibPerCapita = (pibPerCapita1 > pibPerCapita2);
    resSuperPoder = (superPoder1 > superPoder2);

    printf("\n\nRESULTADO DA COMPARAÇÃO DAS CARTAS (1 para 1ª Carta, 0 para 2ªCarta)\n");
    printf("População: %d\nÁrea: %d\nPIB: %d\nPontos turísticos: %d\nDensidade populacional: %d\nPIB per capita: %d\nSuper Poder: %d\n", resPopulacao, resArea, resPib, resPontos, resDensidade, resPibPerCapita, resSuperPoder);

    return 0;
}
