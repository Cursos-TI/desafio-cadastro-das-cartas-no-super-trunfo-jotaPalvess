#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigoCarta1[4];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    char codigoCarta2[4];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf ("Cadastro da primeira carta!\n\n");
    
    printf ("Digite o código da primeira carta (ex: A01): ");
    scanf ("%s", codigoCarta1);
    printf ("Digite a população: ");
    scanf ("%d", &populacao1);
    printf ("Digite a área: ");
    scanf ("%f", &area1);
    printf ("Digite o PIB: ");
    scanf ("%f", &pib1);
    printf ("Digite o número de pontos turísticos: ");
    scanf ("%d", &pontosTuristicos1);

    printf ("Cadastro da segunda carta!\n\n");
    
    printf ("Digite o código da segunda carta (ex: B02): ");
    scanf ("%s", codigoCarta2);
    printf ("Digite a população: ");
    scanf ("%d", &populacao2);
    printf ("Digite a área: ");
    scanf ("%f", &area2);
    printf ("Digite o PIB: ");
    scanf ("%f", &pib2);
    printf ("Digite o número de pontos turísticos: ");
    scanf ("%d", &pontosTuristicos2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n\nCarta 1!\n\n");
    printf("Código da carta: %s\n", codigoCarta1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Número de pontos turísticos: %d\n\n", pontosTuristicos1);

    printf("Carta 2!\n\n");
    printf("Código da carta: %s\n", codigoCarta2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de pontos turísticos: %d\n\n", pontosTuristicos2);


    return 0;
}