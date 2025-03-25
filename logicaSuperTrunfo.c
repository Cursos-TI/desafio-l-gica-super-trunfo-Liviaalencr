#include <stdio.h>

int main (){
    
    // declarando as variáveis da primeira carta 
    char estado1, codigo1[3], cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosturisticos1;
    float densidadePopulacional1, PIBperCapita1;
    float poder1;
    
    // declarando as variáveis da segunda carta
    // segunda carta
    char estado2, codigo2[3], cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosturisticos2;
    float densidadePopulacional2, PIBperCapita2;
    float poder2;
    
    // Boas vindas do jogo. 
    printf("### Bem vindo ao Jogo Super Trunfo! ### \n");

    //entrada de dados para a primeira carta 
    printf("A seguir você irá declarar informações da primeira carta: \n");
    printf("Digite a letra de A a H do primeiro estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o código da primeira carta (EX: A01): \n");
    scanf(" %3s", codigo1);
    getchar(); // consumindo o \n 
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);                 

    printf("Informe a população: \n");
    scanf("%lu", &populacao1);

    printf("informe a área em km²: \n");
    scanf("%f", &area1);

    printf("Informa o PIB: \n");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos1);
    
    // calculando a densidade populacional da primeira carta
    densidadePopulacional1 = (float)populacao1 / area1;

    // calculando o PIB da primeira carta 
    PIBperCapita1 = pib1 / (float)populacao1;

    // calculando o poder 
    poder1 = (float)populacao1 + area1 + pib1 + (float)pontosturisticos1 + PIBperCapita1 + (1/densidadePopulacional1);

    //entrada de dados para a segunda carta
    printf("A seguir você irá declarar informações da segunda carta: \n");
    printf("Digite a letra de A a H do primeiro estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da segunda carta (EX: A01): \n");
    scanf(" %3s", codigo2);
    getchar(); // consumindo o \n 

    printf("Digite o nome da segunda cidade: \n");
    scanf("%s", cidade2);                  

    printf("Informe a população: \n");
    scanf("%lu", &populacao2);

    printf("informe a área em km²: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos2);

    // calculando a densidade populacional da segunda carta
    densidadePopulacional2 = (float)populacao2 / area2;

    //calculando o PIB da segunda carta
    PIBperCapita2 = pib2 / (float)populacao2;

    //calculando o poder da segunda carta
    poder2 = (float)populacao2 + area2 + pib2 +(float)pontosturisticos2 + PIBperCapita2 +(1/densidadePopulacional2);
    
    // imprimindo as informações da carta 1
    printf("Carta 1 \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c", estado1);
    printf("%s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f KM²\n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de pontos turisticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f reais\n", densidadePopulacional1);
    printf("Super poder total: R$ %.2f\n", poder1);
    
    // imprimindo as informações da carta 2
    printf("Carta 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c", estado2);
    printf("%s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f KM²\n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de pontos turisticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f reais\n", densidadePopulacional2);
    printf("Super poder total: R$ %.2f\n", poder2);
    printf("\n");
    //comparando as cartas 
    printf("### Resultado da Partida! ###\n");
    printf("Resultado 1 - Carta 1 vence \n");
    printf("Resultado 0 - Carta 2 Vence \n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos1 > pontosturisticos2);
    printf("Densidade: %.2f\n", densidadePopulacional1 < densidadePopulacional2);
    printf("PIB: %.2f\n", PIBperCapita1 > PIBperCapita2);
    printf("Poder: %d\n", poder1 > poder2);

    // Comparando as cartas com a estrutura de descusção if else
    printf("A área da carta 1, referente a cidade %s é %.2f KM²\n", cidade1, area1);
    printf("O resultado da área da carta 2, referente á cidade %s é %.2f KM²\n", cidade2, area2);
    printf("\n"); 

    int pontos_carta1 = 0, pontos_carta2 = 0;

if (populacao1 > populacao2) pontos_carta1++;
else if (populacao1 < populacao2) pontos_carta2++;

if (area1 > area2) pontos_carta1++;
else if (area1 < area2) pontos_carta2++;

if (pib1 > pib2) pontos_carta1++;
else if (pib1 < pib2) pontos_carta2++;

if (pontosturisticos1 > pontosturisticos2) pontos_carta1++;
else if (pontosturisticos1 < pontosturisticos2) pontos_carta2++;

if (densidadePopulacional1 < densidadePopulacional2) pontos_carta1++; // menor densidade vence
else if (densidadePopulacional1 > densidadePopulacional2) pontos_carta2++;

if (PIBperCapita1 > PIBperCapita2) pontos_carta1++;
else if (PIBperCapita1 < PIBperCapita2) pontos_carta2++;

if (poder1 > poder2) pontos_carta1++;
else if (poder1 < poder2) pontos_carta2++;

printf("\n### Resultado Final ###\n");
if (pontos_carta1 > pontos_carta2) {
    printf("🏆 A primeira carta - %s - Venceu!\n", cidade1);
} else if (pontos_carta1 < pontos_carta2) {
    printf("🏆 A segunda carta - %s - Venceu!\n", cidade2);
} else {
    printf(" ⚖️ O jogo terminou em EMPATE!\n");
} 
return 0;

}