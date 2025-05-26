/* Programa: Super Trunfo Cidades
   Nome: Vinicius de Moraes da Silva
   Data: 26/05/2025
   Desafio: Criar duas cartas com estados diferentes e seu respectivos dados*/

#include <stdio.h>

int main() {
    // Primeira carta (dados Rio)
    char estado_A = 'R'; // A-H conforme regra
    char codigo_A[4] = "R01";
    char cidade_A[20] = "Rio";
    int pop_A = 6748000;
    float area_A = 1200.25;
    float pib_A = 300.50;
    int turismo_A = 30;

    // Segunda carta (dados Fortaleza)
    char estado_B = 'C';
    char codigo_B[4] = "C02";
    char cidade_B[20] = "Fortaleza";
    int pop_B = 2669000;
    float area_B = 314.93;
    float pib_B = 50.75;
    int turismo_B = 25;

    /* Exibição conforme padrão requerido */
    puts("\n=== CARTAS CADASTRADAS ===");
    
    // Carta 1
    printf("\nCarta 1:\nEstado: %c\n", estado_A);
    printf("Codigo: %s\n", codigo_A);
    printf("Cidade: %s\n", cidade_A);
    printf("Populacao: %d\n", pop_A);
    printf("Area: %.2f km2\n", area_A);
    printf("PIB: %.2f bilhoes\n", pib_A);
    printf("Turismo: %d pontos\n", turismo_A);

    // Carta 2
    printf("\nCarta 2:\nEstado: %c\n", estado_B);
    printf("Codigo: %s\n", codigo_B);
    printf("Cidade: %s\n", cidade_B);
    printf("Populacao: %d\n", pop_B);
    printf("Area: %.2f km2\n", area_B);
    printf("PIB: %.2f bilhoes\n", pib_B);
    printf("Turismo: %d pontos\n", turismo_B);

    return 0;
}