#include <stdio.h>

// Desafio Super Trunfo - Países - Nivel Novato

int main() {
    //Variavel - Carta 01
    char cidade[72], códigodacidade;
    int populacão, pontosturisticos;
    float area, pib;
    //Variavel - Carta 02
    char cidade2[72], códigodacidade2;
    int populacão2, pontosturisticos2;
    float area2, pib2;

//Menu
    printf ("Insira os dados das cidades nas cartas! \n")

    //carta 01 - Estrutura interna da carta

        printf ("Digite sua cidade: \n");
        scanf ("%s", &cidade);

        printf ("código da cidade: \n");
        scanf ("%s", %códigodacidade;);

        printf ("População: \n")
        scanf ("%d", &populacão);

        printf ("area: \n");
        scanf ("%f", &area);

        printf ("PIB: \n");
        scanf ("%d", &pib);

        printf ("Quantidade de pontos turisticos: \n");
        scanf ("%f", &pontosturisticos);

    // Carta 02 - Estrutura interna da carta
        printf ("Digite sua cidade: \n");
        scanf ("%s", &cidade2);

        printf ("código da cidade: \n");
        scanf ("%s", %códigodacidade2;);

        printf ("População: \n")
        scanf ("%d", &populacão2);

        printf ("area: \n");
        scanf ("%f", &area2);

        printf ("PIB: \n");
        scanf ("%d", &pib2);

        printf ("Quantidade de pontos turisticos: \n");
        scanf ("%f", &pontosturisticos2);

    //Exibição das cartas
    //Carta 01
    printf ("CARTA 01 \n", )
    printf ("Cidade  %s \n - Codigo da cidade: %s \n - População: %d\n - Area: %f - PIB: %f \n - Quantidade de pontos turisticos: %d \n", cidade, codigodacidade, populacão, area, pib, pontosturisticos);
    printf ("Cidade  %s \n - Codigo da cidade: %s \n - População: %d\n - Area: %f - PIB: %f \n - Quantidade de pontos turisticos: %d \n", cidade2, codigodacidade2, populacão, area, pib, pontosturisticos2);


    return 0;
}
