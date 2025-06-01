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

//Cálculo do PIB per capita e densidade populacional da primeira carta

    float dens_pop_1 = (float) populacao_1 / area_1;
    float pib_percap_1 = (float) pib_1 / populacao_1;

//Cálculo do PIB per capita e densidade populacional da segunda carta

    float dens_pop_2 = (float) populacao_2 / area_2;
    float pib_percap_2 = (float) pib_2 / populacao_2;

//conversão em bilhões

    float pib_1_bilhao = pib_1 / 1000000000;
    float pib_2_bilhao = pib_2 / 1000000000;

//Cálculo do Super Poder da primeira carta

    float super_poder_1 = (float) populacao_1 + area_1 + pib_1_bilhao + pts_tur_1 + (1 / dens_pop_1) + pib_percap_1;
    float super_poder_2 = (float) populacao_2 + area_2 + pib_2_bilhao + pts_tur_2 + (1 / dens_pop_2) + pib_percap_2;

//saída dos dados e execução do desafio

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codigo_1);
    printf("Nome da cidade: %s\n", nome_1);
    printf("População:%d habitantes\n", populacao_1);
    printf("Área:%.2f km²\n", area_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1_bilhao);
    printf("Pontos turísticos: %d\n", pts_tur_1);
    printf("Densidade populacinal: %.2f hab/km²\n", dens_pop_1);
    printf("PIB per Capita: %.2f reais\n", pib_percap_1);
    printf("Super Poder: %.2f\n\n", super_poder_1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigo_2);
    printf("Nome da cidade: %s\n", nome_2);
    printf("População:%d habitantes\n", populacao_2);
    printf("Área:%.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2_bilhao);
    printf("Pontos turísticos: %d\n", pts_tur_2);
    printf("Densidade populacinal: %.2f hab/km²\n", dens_pop_2);
    printf("PIB per Capita: %.2f reais\n", pib_percap_2);
    printf("Super Poder: %.2f\n\n", super_poder_2);

//Comparação dos Valores das Cartas

    printf("Comparação de cartas(para 1 carta 1 vence, para 0 carta 2 vence):\n");
    printf("População: %d\n", (int) populacao_1 > populacao_2);
    printf("Área: %d\n", (int) area_1 > area_2);
    printf("PIB: %d\n", (int) pib_1_bilhao > pib_2_bilhao);
    printf("Pontos Turísticos: %d\n", (int) pts_tur_1 > pts_tur_2);
    printf("Densidade Populacional: %d\n", (int) dens_pop_1 < dens_pop_2);
    printf("PIB per Capita: %d\n", (int) pib_percap_1 > pib_percap_2);
    printf("Super Poder: %d\n\n", (int) super_poder_1 > super_poder_2);

    return 0;
}