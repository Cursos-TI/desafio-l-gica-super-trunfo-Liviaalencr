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

    // calculando o poder da primeira carta
    poder1 = (float)populacao1 + area1 + pib1 + (float)pontosturisticos1 + PIBperCapita1;
    if (densidadePopulacional1 != 0) {
        poder1 += (1 / densidadePopulacional1);
    }
    
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
    poder2 = (float)populacao2 + area2 + pib2 + (float)pontosturisticos2 + PIBperCapita2;
    if (densidadePopulacional2 != 0) {
        poder2 += (1 / densidadePopulacional2);
    }
    
    // menu para escolha de um cretério de comparação
    int opcao;
    printf("\nEscolha um criterio para comparação: \n");
    printf("1- População\n2 - Área\n3 - PIB\n4 - Número de pontos turisticos\n");
    printf("\n");
    printf("Digite o numero da opção desejada: \n");
    scanf("%d", &opcao);

    // Determinando a carta com valor vencedor 

switch (opcao) {
    case 1: // População
        if (populacao1 > populacao2) {
            printf("🏆 A cidade vencedora é: %s (Código: %s) com %d habitantes!\n", cidade1, codigo1, populacao1);
        } else if (populacao2 > populacao1) {
            printf("🏆 A cidade vencedora é: %s (Código: %s) com %d habitantes!\n", cidade2, codigo2, populacao2);
        } else {
            printf("🤝 Empate! Ambas as cidades têm %d habitantes.\n", populacao1);
        }
        break;

    case 2: // Área
        if (area1 > area2) {
            printf("🏆 A cidade vencedora é: %s (Código: %s) com %.2f km² de área!\n", cidade1, codigo1, area1);
        } else if (area2 > area1) {
            printf("🏆 A cidade vencedora é: %s (Código: %s) com %.2f km² de área!\n", cidade2, codigo2, area2);
        } else {
            printf("🤝 Empate! Ambas as cidades têm %.2f km² de área.\n", area1);
        }
        break;

    case 3: // PIB
        if (pib1 > pib2) {
            printf("🏆 A cidade vencedora é: %s (Código: %s) com PIB de %.2f bilhões de reais!\n", cidade1, codigo1, pib1);
        } else if (pib2 > pib1) {
            printf("🏆 A cidade vencedora é: %s (Código: %s) com PIB de %.2f bilhões de reais!\n", cidade2, codigo2, pib2);
        } else {
            printf("🤝 Empate! Ambas as cidades têm PIB de %.2f bilhões de reais.\n", pib1);
        }
        break;

    case 4: // Pontos turísticos
        if (pontosturisticos1 > pontosturisticos2) {
            printf("🏆 A cidade vencedora é: %s (Código: %s) com %d pontos turísticos!\n", cidade1, codigo1, pontosturisticos1);
        } else if (pontosturisticos2 > pontosturisticos1) {
            printf("🏆 A cidade vencedora é: %s (Código: %s) com %d pontos turísticos!\n", cidade2, codigo2, pontosturisticos2);
        } else {
            printf("🤝 Empate! Ambas as cidades têm %d pontos turísticos.\n", pontosturisticos1);
        }
        break;

    default:
        printf("⚠️ Opção inválida! Nenhuma comparação foi feita.\n");
}

return 0;
}
