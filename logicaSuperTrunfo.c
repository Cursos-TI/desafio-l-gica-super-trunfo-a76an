#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char estadoCarta1, codigoCarta1[4], nomeCidade1[25], estadoCarta2, codigoCarta2[4], nomeCidade2[25];
    unsigned int populacao1, populacao2;
    int numeroPontosTuristicos1, numeroPontosTuristicos2;
    float area1, pib1, densidadePopulacional1, pibPerCapita1, pibBilhao1, area2, pib2, densidadePopulacional2, pibPerCapita2, pibBilhao2;

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

    // Adequa PIB para bilhões de reais
    pibBilhao1 = pib1 / 1000000000.0;
    pibBilhao2 = pib2 / 1000000000.0;

  
    printf("Dados da Carta 01:\n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %u habitantes\nÁrea: %.1f km²\n"
        "PIB: R$ %.2f bilhões\nNúmero de pontos turísticos: %d\nDensidade populacional: %.2f hab/km²\n"
        "PIB per capita: R$ %.2f/hab\n", estadoCarta1, codigoCarta1, nomeCidade1, populacao1, area1, pibBilhao1, numeroPontosTuristicos1, densidadePopulacional1, pibPerCapita1);

    printf("------------------------------\n");

    printf("Dados da Carta 02:\n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %u habitantes\nÁrea: %.1f km²\n"
        "PIB: R$ %.2f bilhões\nNúmero de pontos turísticos: %d\nDensidade populacional: %.2f hab/km²\n"
        "PIB per capita: R$ %.2f/hab\n", estadoCarta2, codigoCarta2, nomeCidade2, populacao2, area2, pibBilhao2, numeroPontosTuristicos2, densidadePopulacional2, pibPerCapita2);
    
    printf("------------------------------\n");

    // Comparação de Cartas:
    

    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
