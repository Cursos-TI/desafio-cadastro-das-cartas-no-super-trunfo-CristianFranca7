#include <stdio.h>

int main(){

    char estado_1, estado_2;
    char codigo_1[10], codigo_2[10];
    char nome_1[30], nome_2[30];
    int populacao_1, populacao_2;
    float area_1, area_2;
    float pib_1, pib_2;
    int pts_tur_1, pts_tur_2;

//Leitura dos dados da primeira carta

    printf("Digite a letra do Estado da primeira carta:\n");
    scanf("%c", &estado_1);

    printf("Digite o código da primeira carta:\n");
    scanf("%s", codigo_1);

    printf("Digite o nome da cidade da primeira carta:\n");
    scanf("%s", nome_1);

    printf("Digite o número da população da primeira carta:\n");
    scanf("%d", &populacao_1);

    printf("Digite a área da primeira carta:\n");
    scanf("%f", &area_1);

    printf("Digite o número do PIB da primeira carta:\n");
    scanf("%f", &pib_1);

    printf("Digite o número de pontos turísticos da primeira carta:\n");
    scanf("%d", &pts_tur_1);

//Leitura dos dados da segunda carta

    printf("Digite a letra do Estado da segunda carta:\n");
    scanf(" %c", &estado_2);

    printf("Digite o código da segunda carta:\n");
    scanf("%s", codigo_2);

    printf("Digite o nome da cidade da segunda carta:\n");
    scanf("%s", nome_2);

    printf("Digite o número da população da segunda carta:\n");
    scanf("%d", &populacao_2);

    printf("Digite a área da segunda carta:\n");
    scanf("%f", &area_2);

    printf("Digite o número do PIB da segunda carta:\n");
    scanf("%f", &pib_2);

    printf("Digite o número de pontos turísticos da segunda carta:\n");
    scanf("%d", &pts_tur_2);

//saída dos dados e execução do desafio

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codigo_1);
    printf("Nome da cidade: %s\n", nome_1);
    printf("População:%d habitantes\n", populacao_1);
    printf("Área:%.2f km²\n", area_1);
    printf("PIB: %.2f R$\n", pib_1);
    printf("Pontos turísticos: %d\n\n", pts_tur_1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigo_2);
    printf("Nome da cidade: %s\n", nome_2);
    printf("População:%d habitantes\n", populacao_2);
    printf("Área:%.2f km²\n", area_2);
    printf("PIB: %.2f R$\n", pib_2);
    printf("Pontos turísticos: %d\n", pts_tur_2);

    return 0;
}