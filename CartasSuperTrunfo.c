#include <stdio.h>

// Desafio Super Trunfo - Países - Nivel Aventureiro

int main() {

    //Variavel - Carta 01
    char cidade[50], codigodacidade [50], estado[50];
    int populacao, pontosturisticos;
    float area, pib, denspopulacional, pibpercapita;

    //Variavel - Carta 02
    char cidade2[50], codigodacidade2[50], estado2[50];
    int populacao2, pontosturisticos2;
    float area2, pib2, denspopulacional2, pibpercapita2;

    /* Outra alternativa para o menu de variaveis é o de inserir todos os nomes significativos na mesma linha de sua respectiva sintaxe. 
    Feito dessa forma apenas para uma melhor visualização*/

//Menu
    printf ("Insira os dados das cidades nas cartas! \n");

    //carta 01 - Estrutura interna da carta

        printf ("Digite a cidade: \n");
        scanf ("%s", cidade);

        printf ("Digite o Estado: \n");
        scanf ("%s", estado);

        printf ("código da cidade: \n");
        scanf ("%s", codigodacidade);

        printf ("População: \n");
        scanf ("%d", &populacao);

        printf ("area: \n");
        scanf ("%f", &area);

        printf ("PIB: \n");
        scanf ("%f", &pib);

        printf ("Qtd de pontos turisticos: \n");
        scanf ("%d", &pontosturisticos);


     //Armazenamento de valores calculados para os seguintes atributos:
        denspopulacional = (float) populacao / area; //calculo de densidade populacional
        pibpercapita = (float) pib / populacao; //calculo do pib per capita

        
    // Carta 02 - Estrutura interna da carta
        printf ("Digite a cidade: \n");
        scanf ("%s", cidade2);

        printf ("Digite o Estado: \n");
        scanf ("%s", estado2);

        printf ("código da cidade: \n");
        scanf ("%s", codigodacidade2);

        printf ("População: \n");
        scanf ("%d", &populacao2);

        printf ("area: \n");
        scanf ("%f", &area2);

        printf ("PIB: \n");
        scanf("%f", &pib2);

        printf ("Qtd de pontos turisticos: \n");
        scanf ("%d", &pontosturisticos2);

        //Armazenamento de valores calculados para os seguintes atributos:
        denspopulacional2 = (float) populacao2 / area2; //calculo de densidade populacional
        pibpercapita2 = (float) pib2 / populacao2; //calculo do pib per capita

    //Exibição das cartas 01 e 02
    printf("CARTA 01 \n");
    printf("- Cidade: %s\n - O Estado: %s\n - Codigo da cidade: %s\n - População: %d\n - Area: %.2f\n - PIB: %.2f \n - Qtd de pontos turisticos: %d\n", cidade, estado, codigodacidade, populacao, area, pib, pontosturisticos);
    printf(" - A densidade populacional é de: %.2f hab/km² \n - O PIB per Capita é de: %.2f \n", denspopulacional, pibpercapita);

    printf("CARTA 02 \n");
    printf("- Cidade: %s\n - O Estado: %s\n - Codigo da cidade: %s\n - População: %d\n - Area: %.2f \n - PIB: %.2f \n - Qtd de pontos turisticos: %d \n", cidade2, estado2, codigodacidade2, populacao2, area2, pib2, pontosturisticos2);
    printf (" - A densidade populacional é de: %.2f hab/km² \n- O PIB per Capita é de: %.2f\n", denspopulacional2, pibpercapita2);

    return 0;

}