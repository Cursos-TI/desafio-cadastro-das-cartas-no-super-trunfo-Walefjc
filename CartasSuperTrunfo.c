#include <stdio.h>

int main(){
    char estado1 = 'A';
    char codigo1[4] = "A01";
    char nomeCidade1[50] = "São Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontosTuristicos1 = 50;


    char estado2 = 'B';
    char codigo2[4] = "B02";
    char nomeCidade2[50] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontosTuristicos2 = 30;

    char estado3 = 'c';
    char codigo3[4] = "C03";
    char nomeCidade3[50] = "Walef Cit";
    int populacao3 = 632300;
    float area3 = 1800.26;
    float pib3 = 500.15;
    int pontosTuristico3 = 62;


    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n, codigo1");
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d", populacao1);
    printf("Área: %d\n", area1);
    printf("PIB: %.2F km²", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);





    return 0;

}