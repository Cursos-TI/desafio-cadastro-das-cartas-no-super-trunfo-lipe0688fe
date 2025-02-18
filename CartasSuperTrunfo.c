#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main(){
    char estadoA; // nome do estado
    char codigoCartaA[3]; // codigo da carta
    char nomecidadeA[20]; // nome da cidade 
    int populacaoA; // população da cidade
    float areaA; // area total da cidade
    float pibA; // PIB da cidade
    int pTA;  //numero de pontos turisticos carta A

    char estadoB; // nome do estado
    char codigoCartaB[3]; // codigo da carta
    char nomecidadeB[20]; // nome da cidade 
    int populacaoB; // população da cidade
    float areaB; // area total da cidade
    float pibB; // PIB da cidade
    int pTB;  //numero de pontos turisticos carta A

    // Inserir dados da carta A

    printf("INSIRA NOME DO ESTADO: \n");
    scanf("%c", &estadoA);
    printf("INSIRA O CODIGO DA CARTA: \n");
    scanf("%s", codigoCartaA);
    printf("INSIRA O NOME DA CIDADE: \n");
    scanf("%s", nomecidadeA);
    printf("INSIRA O NUMERO DA POPULACAO: \n");
    scanf("%d", &populacaoA);
    printf("INSIRA NUMERO DE AREA: \n");
    scanf("%f", &areaA);
    printf("INSIRA NUMERO DO PIB DA CIDADE: \n");
    scanf("%f", &pibA);
    printf("INSIRA O NUMERO DE PONTOS TURISTICOS DA CIDADE: \n");
    scanf("%d", &pTA);

    // Inserir dados da carta B

    printf("\n\nDADOS PARA NOVA CARTA\n\n");

    printf("INSIRA NOME DO ESTADO: \n");
    scanf("%c", &estadoB);
    printf("INSIRA O CODIGO DA CARTA: \n");
    scanf("%s", codigoCartaB);
    printf("INSIRA O NOME DA CIDADE: \n");
    scanf("%s", nomecidadeB);
    printf("INSIRA O NUMERO DA POPULACAO: \n");
    scanf("%d", &populacaoB);
    printf("INSIRA NUMERO DE AREA: \n");
    scanf("%f", &areaB);
    printf("INSIRA NUMERO DO PIB DA CIDADE: \n");
    scanf("%f", &pibB);
    printf("INSIRA O NUMERO DE PONTOS TURISTICOS DA CIDADE: \n");
    scanf("%d", &pTB);

    printf("\n\nVISUALIZACAO DAS CARTAS CADASTRADAS\n\n");
    printf("CARTA 1: \n ESTADO: %c \n NOME DA CIDADE: %s \n POPULACAO: %d \n AREA: %f km² \n PIB: %f bilhoes de reais \n NUMERO DE PONTOS TURISTICOS: %d \n", estadoA, codigoCartaA, nomecidadeA, populacaoA, areaA, pibA, pTA);
    printf("CARTA 2: \n ESTADO: %c \n NOME DA CIDADE: %s \n POPULACAO: %d \n AREA: %f km² \n PIB: %f bilhoes de reais \n NUMERO DE PONTOS TURISTICOS: %d \n", estadoB, codigoCartaB, nomecidadeB, populacaoB, areaB, pibB, pTB);