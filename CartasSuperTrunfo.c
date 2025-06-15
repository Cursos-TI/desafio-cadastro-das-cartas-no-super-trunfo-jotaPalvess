#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa


// TODO O DESAFIO FOI FEITO COM BASE NO QUE FOI PEDIDO NO README.md


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigoCarta1[4];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    char codigoCarta2[4];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf ("Cadastro da primeira carta!\n\n");
    
    printf ("Digite o código da primeira carta (ex: A01): ");
    scanf ("%s", codigoCarta1);
    printf ("Digite a população: ");
    scanf ("%lu", &populacao1);
    printf ("Digite a área: ");
    scanf ("%f", &area1);
    printf ("Digite o PIB: ");
    scanf ("%f", &pib1);
    printf ("Digite o número de pontos turísticos: ");
    scanf ("%d", &pontosTuristicos1);

    // Cálculos da primeira carta
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000)/ populacao1; 
    superPoder1 = (float) populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidadePopulacional1);


    printf ("\n\nCadastro da segunda carta!\n\n");
    
    printf ("Digite o código da segunda carta (ex: B02): ");
    scanf ("%s", codigoCarta2);
    printf ("Digite a população: ");
    scanf ("%lu", &populacao2);
    printf ("Digite a área: ");
    scanf ("%f", &area2);
    printf ("Digite o PIB: ");
    scanf ("%f", &pib2);
    printf ("Digite o número de pontos turísticos: ");
    scanf ("%d", &pontosTuristicos2);

    // Cálculos da segunda carta
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2; 
    superPoder2 = (float) populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n\nCarta 1!\n\n");
    printf("Código da carta: %s\n", codigoCarta1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    printf("Super poder: %.2f\n", superPoder1);

    printf("\nCarta 2!\n\n");
    printf("Código da carta: %s\n", codigoCarta2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    printf("Super poder: %.2f\n", superPoder2);

    // Comparações
    printf("\nComparação de atributos!\n\n");
    printf("Populacao: %d\n", populacao1 > populacao2);
    printf("Area: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: %d\n", densidadePopulacional1 < densidadePopulacional2);
    printf("PIB per Capita: %d\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: %d\n", superPoder1 > superPoder2);

    return 0;
}