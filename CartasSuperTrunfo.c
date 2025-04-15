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

// Exibindo dados da carta 2
    printf("Carta 1: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Aréa: %.2f km²\n", area2);
    printf("PIB: %.2f km²\n", area2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
  
// Exibindo dados da carta 3
    printf("Carta 3: \n");
    printf("Estado: %c\n", estado3);
    printf("Código: %s\n", codigo3);
    printf("Nome da Cidade: %s\n", nomeCidade3);
    printf("População: %d\n", populacao3);
    printf("Aréa: %.2f km²\n", area3);
    printf("PIB:%.2F km²\n", pib3);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos3);


    printf("Digite os dados da carta 1:\n");

    printf("Estado (A-H): ");
    scanf("%c", &estado1);

    printf("Código da carta A01");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf("%[^\n]", nomeCidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Aréa: (km²):");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos Túristicos: ");
    scanf("%d", &pontosTuristicos1);

    
    printf("Digite os dados da carta 2:\n");

    printf("Estado (A-H): ");
    scanf("%c", &estado2);

    printf("Código da carta A02");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf("%[^\n]", nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Aréa: (km²):");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos Túristicos: ");
    scanf("%d", &pontosTuristicos2);

    
    printf("Digite os dados da carta 3:\n");

    printf("Estado (A-H): ");
    scanf("%c", &estado3);

    printf("Código da carta A03");
    scanf("%s", codigo3);

    printf("Nome da Cidade: ");
    scanf("%[^\n]", nomeCidade3);

    printf("População: ");
    scanf("%d", &populacao3);

    printf("Aréa: (km²):");
    scanf("%f", &area3);

    printf("PIB: ");
    scanf("%f", &pib3);

    printf("Número de pontos Túristicos: ");
    scanf("%d", &pontosTuristicos3);



    return 0;

}