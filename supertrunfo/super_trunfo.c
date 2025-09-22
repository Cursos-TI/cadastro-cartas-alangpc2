#include <stdio.h>

int main() {
    char Estado1[3], Estado2[3]; 
    char codigo1[10], codigo2[10];      
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pturistico1, pturistico2;  // pontos turísticos
    
    printf("---- Carta 1 ----\n"); //carta 1 entrada e saida de dados

    printf("Estado: ");
    scanf("%2s", Estado1);

    printf("Codigo: ");
    scanf("%9s", codigo1);

    printf("Cidade: ");
    scanf("%49s", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("Pib: ");
    scanf("%f", &pib1);

    printf("Pontos Turisticos: ");
    scanf("%d", &pturistico1);
    // abaixo tera a leitura dos dados do usuario na carta 1
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %s\n", Estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("Pib: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pturistico1);

    printf("\n---- Carta 2 ----\n"); //carta 2 entrada e saida de dados

    printf("Estado: ");
    scanf("%2s", Estado2);

    printf("Codigo: ");
    scanf("%9s", codigo2);

    printf("Cidade: ");
    scanf("%49s", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("Pib: ");
    scanf("%f", &pib2);

    printf("Pontos Turisticos: ");
    scanf("%d", &pturistico2);
    //abaixo tera a leitura dos dados do usuario da carta 2
    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %s\n", Estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("Pib: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pturistico2);

    return 0;
}