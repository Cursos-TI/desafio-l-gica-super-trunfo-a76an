#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char estadoCarta1, codigoCarta1[4], nomeCidade1[25], estadoCarta2, codigoCarta2[4], nomeCidade2[25], cidadeVencedora[25];
    unsigned int populacao1, populacao2;
    int numeroPontosTuristicos1, numeroPontosTuristicos2, criterioComparacao, resultado;
    float area1, pib1, densidadePopulacional1, pibPerCapita1, pibBilhao1, superPoder1;
    float area2, pib2, densidadePopulacional2, pibPerCapita2, pibBilhao2, superPoder2;

    // Dados para testes:
    estadoCarta1 = 'A';
    strcpy(codigoCarta1,"A04");
    strcpy(nomeCidade1, "Ijuí");
    estadoCarta2 = 'B';
    strcpy(codigoCarta2,"B01");
    strcpy(nomeCidade2, "Agudo");
    populacao1 = 88000;
    populacao2 = 4000;
    numeroPontosTuristicos1 = 5;
    numeroPontosTuristicos2 = 2;
    area1 = 200;
    pib1 = 8400000000;
    area2 = 120;
    pib2 = 4500000000;

    // Cadastro das Cartas:
    // printf("Insira os dados das cartas:\n");
    // printf("------------------------------\n");

    // printf("** Carta 01 **\n");
    // printf("Informe o estado da carta (de A a H):\n");
    // scanf(" %c", &estadoCarta1);

    // printf("Informe o código da carta (estado seguido de 01 a 04, por exemplo: A01, B03, C02):\n");
    // scanf("%s", codigoCarta1);

    // printf("Informe o nome da cidade:\n");
    // scanf("%s", nomeCidade1);

    // printf("Informe a população da cidade:\n");
    // scanf("%u", &populacao1);

    // printf("Informe a área da cidade:\n");
    // scanf("%f", &area1);

    // printf("Informe o PIB da cidade:\n");
    // scanf("%f", &pib1);

    // printf("Informe o número de pontos turísticos da cidade:\n");
    // scanf("%d", &numeroPontosTuristicos1);

    // printf("------------------------------\n");

    // printf("** Carta 02 **\n");
    // printf("Informe o estado da carta (de A a H):\n");
    // scanf(" %c", &estadoCarta2);

    // printf("Informe o código da carta (estado seguido de 02 a 04, por exemplo: A02, B03, C02):\n");
    // scanf("%s", codigoCarta2);

    // printf("Informe o nome da cidade:\n");
    // scanf("%s", nomeCidade2);

    // printf("Informe a população da cidade:\n");
    // scanf("%u", &populacao2);

    // printf("Informe a área da cidade:\n");
    // scanf("%f", &area2);

    // printf("Informe o PIB da cidade:\n");
    // scanf("%f", &pib2);

    // printf("Informe o número de pontos turísticos da cidade:\n");
    // scanf("%d", &numeroPontosTuristicos2);

    printf("------------------------------\n");

    // Cálculo da densidade populacional e do pib 'per capita'
    densidadePopulacional1 = (float) populacao1 / area1;
    densidadePopulacional2 = (float) populacao2 / area2;

    pibPerCapita1 = pib1 / (float) populacao1;
    pibPerCapita2 = pib2 / (float) populacao2;

    // Adequação do valor do PIB para bilhões de reais
    pibBilhao1 = pib1 / 1000000000.0;
    pibBilhao2 = pib2 / 1000000000.0;

    // Impressão dos dados cadastrados para as cartas
    printf("Dados da Carta 01:\n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %u habitantes\nÁrea: %.1f km²\n", estadoCarta1, codigoCarta1, nomeCidade1, populacao1, area1);
    printf("PIB: R$ %.2f bilhões\nNúmero de pontos turísticos: %d\nDensidade populacional: %.2f hab/km²\n", pibBilhao1, numeroPontosTuristicos1, densidadePopulacional1);
    printf("PIB per capita: R$ %.2f/hab\n", pibPerCapita1);

    printf("------------------------------\n");

    printf("Dados da Carta 02:\n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %u habitantes\nÁrea: %.1f km²\n"
        "PIB: R$ %.2f bilhões\nNúmero de pontos turísticos: %d\nDensidade populacional: %.2f hab/km²\n"
        "PIB per capita: R$ %.2f/hab\n", estadoCarta2, codigoCarta2, nomeCidade2, populacao2, area2, pibBilhao2, numeroPontosTuristicos2, densidadePopulacional2, pibPerCapita2);
    
    printf("------------------------------\n");

    // Cálculo do Super Poder
    superPoder1 = (float) populacao1 + area1 + pib1 + numeroPontosTuristicos1 + (1.0 / densidadePopulacional1);
    superPoder2 = (float) populacao2 + area2 + pib2 + numeroPontosTuristicos2 + (1.0 / densidadePopulacional2);
    
    // Cria menu interativo para o usuário escolher o critério de comparação
    printf("------------------------------\n");
    
    printf("**** Opções para comparação ****\n1. População\n2. Área\n3. Pib\n4.Quantidade de pontos turísticos\n"
        "5. Densidade populacional\n6. Pib per capita\n");
    printf("O que deve ser comparado (digite o número de uma opção acima)?\n");
    scanf("%d", &criterioComparacao);

    printf("------------------------------\n");
    
    // Compara as cartas conforme o critério escolhido
    switch (criterioComparacao)
    {
        case 1:
            resultado = (populacao1>populacao2) ? 1 : 0;
            break;
        case 2:
            resultado = (area1>area2) ? 1 : 0;
            break;
        case 3:
            resultado = (pib1>pib2) ? 1 : 0;
            break;
        case 4:
            resultado = (numeroPontosTuristicos1>numeroPontosTuristicos2) ? 1 : 0;
            break;
        case 5:
            resultado = (densidadePopulacional1<densidadePopulacional2) ? 1 : 0;
            break;
        case 6:
            resultado = (pibPerCapita1>pibPerCapita2) ? 1 : 0;
            break;
        default:
            printf("Opção inválida!\n");
        }

    // Exibe o resultado da comparação
    printf("**** Resultado do jogo ****\n");
    printf("Cidades comparadas: \n\t%s X %s.\n", nomeCidade1, nomeCidade2);

    printf("Critério de comparação escolhido: \n\t");
    switch (criterioComparacao)
    {
    case 1:
        printf("População\n");
        break;
    case 2:
        printf("Área\n");
        break;
    case 3:
        printf("PIB\n");
        break;
    case 4:
        printf("Número de pontos turísticos\n");
        break;
    case 5:
        printf("Densidade populacional\n");
        break;
    case 6:
        printf("PIB per capita\n");
        break;
    }
    
    printf("Valores de cada carta:\n\t");
    switch (criterioComparacao)
    {
        case 1:
            printf("%s: %u hab X %s: %u hab\n", nomeCidade1, populacao1, nomeCidade2, populacao2);
            break;
        case 2:
            printf("%s: %.2f km² X %s: %.2f km²\n", nomeCidade1, area1, nomeCidade2, area2);
            break;
        case 3:
            printf("%s: R$ %.2f bilhões X %s: R$ %.2f bilhões\n", nomeCidade1, pibBilhao1, nomeCidade2, pibBilhao2);
            break;
        case 4:
            printf("%s: %d pontos turísticos X %s: %d pontos turísticos\n", nomeCidade1, numeroPontosTuristicos1, nomeCidade2, numeroPontosTuristicos2);
            break;
        case 5:
            printf("%s: %.2f hab/km² X %s: %.2f hab/km²\n", nomeCidade1, densidadePopulacional1, nomeCidade2, densidadePopulacional2);
            break;
        case 6:
            printf("%s: R$ %.2f/hab X %s: R$ %.2f/hab\n", nomeCidade1, pibPerCapita1, nomeCidade2, pibPerCapita2);
            break;
    }

 
    printf("Carta vencedora: \n\t");
    if (resultado == 1)
    {
        printf("%s\n", nomeCidade1);
    }
    else if (resultado == 0)
    {
        printf("%s\n", nomeCidade2);
    }

    printf("------------------------------\n");

    return 0;
}
