#include <stdio.h>#include <stdio.h>

// Desafio Super Trunfo - Países - Nivel Novato

int main() {
    //Variavel - Carta 01
    char cidade[50], codigodacidade [50];
    int populacao, pontosturisticos;
    float area, pib;
    //Variavel - Carta 02
    char cidade2[50], codigodacidade2[50];
    int populacao2, pontosturisticos2;
    float area2, pib2;

//Menu
    printf ("Insira os dados das cidades nas cartas! \n");

    //carta 01 - Estrutura interna da carta

        printf ("Digite sua cidade: \n");
        scanf ("%s", cidade);

        printf ("código da cidade: \n");
        scanf ("%s", codigodacidade);

        printf ("População: \n");
        scanf ("%d", &populacao);

        printf ("area: \n");
        scanf (" %f", &area);

        printf ("PIB: \n");
        scanf ("%f", &pib);

        printf ("Qtd de pontos turisticos: \n");
        scanf ("%d", &pontosturisticos);

    // Carta 02 - Estrutura interna da carta
        printf ("Digite sua cidade: \n");
        scanf ("%s", cidade2);

        printf ("código da cidade: \n");
        scanf ("%s", codigodacidade2);

        printf ("População: \n");
        scanf ("%d", &populacao2);

        printf ("area: \n");
        scanf (" %f", &area2);

        printf ("PIB: \n");
        scanf(" %f", pib2);

        printf ("Qtd de pontos turisticos: \n");
        scanf (" %d", &pontosturisticos2);

    //Exibição das cartas 01 e 02
    printf("CARTA 01 \n");
    printf("cidade: %s\n - Codigo da cidade: %s\n - População: %d\n - Area: %.2f\n - PIB: %.2f \n - Qtd de pontos turisticos: %d\n", cidade, codigodacidade, populacao, area, pib, pontosturisticos);

    printf("CARTA 02 \n");
    printf("Cidade: %s \n - Codigo da cidade: %s \n - População: %d\n - Area: %.2f \n - PIB: %.2f \n - Qtd de pontos turisticos: %d \n", cidade2, codigodacidade2, populacao, area, pib, pontosturisticos2);

    return 0;

}