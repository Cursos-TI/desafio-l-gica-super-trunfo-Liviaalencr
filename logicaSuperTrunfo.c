#include <stdio.h>

int main (){

    // Declarando as variáveis da primeira carta
    char estado1, codigo1[3], cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosturisticos1;
    float densidadePopulacional1, PIBperCapita1;
    
    // Declarando as variáveis da segunda carta
    char estado2, codigo2[3], cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosturisticos2;
    float densidadePopulacional2, PIBperCapita2;

    // Boas vindas do jogo.
    printf("### Bem-vindo ao Jogo Super Trunfo! ### \n");

    // Entrada de dados para a primeira carta
    printf("A seguir você irá declarar informações da primeira carta: \n");
    printf("Digite a letra de A a H do primeiro estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o código da primeira carta (EX: A01): \n");
    scanf(" %3s", codigo1);
    getchar();  // Espera que o usuário pressione Enter sem concluir a execução.

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Informe a população: \n");
    scanf("%lu", &populacao1);

    printf("Informe a área em km²: \n");
    scanf("%f", &area1);

    printf("Informe o PIB (em bilhões de reais): \n");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos1);
    
    // Calculando a densidade populacional da primeira carta
    densidadePopulacional1 = (float)populacao1 / area1;

    // Calculando o PIB per capita da primeira carta
    PIBperCapita1 = pib1 / (float)populacao1;

    // Entrada de dados para a segunda carta
    printf("A seguir você irá declarar informações da segunda carta: \n");
    printf("Digite a letra de A a H do primeiro estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da segunda carta (EX: A01): \n");
    scanf(" %3s", codigo2);
    getchar();  // Consumindo o \n

    printf("Digite o nome da segunda cidade: \n");
    scanf("%s", cidade2);

    printf("Informe a população: \n");
    scanf("%lu", &populacao2);

    printf("Informe a área em km²: \n");
    scanf("%f", &area2);

    printf("Informe o PIB (em bilhões de reais): \n");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos2);

    printf("\n");
    
    // Calculando a densidade populacional da segunda carta
    densidadePopulacional2 = (float)populacao2 / area2;

    // Calculando o PIB per capita da segunda carta
    PIBperCapita2 = pib2 / (float)populacao2;

    // Menu para comparação dos atributos escolhidos
    int escolha1, escolha2;
    
    printf("Escolha o 1° atributo a ser comparado: \n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos turísticos\n5. Densidade populacional\n6. PIB per capita\n");
    scanf("%d", &escolha1);
    printf("\n");

    printf("Escolha o 2° atributo a ser comparado: \n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos turísticos\n5. Densidade populacional\n6. PIB per capita\n");
    scanf("%d", &escolha2);
    printf("\n");

    // Verificando se o segundo atributo é igual ao primeiro
    if (escolha1 == escolha2) {
        printf("Opção inválida, o segundo atributo não pode ser o mesmo que o primeiro\n");
        printf("Digite novamente o segundo atributo: ");
        scanf("%d", &escolha2);
    }
    
    // Comparando os atributos escolhidos
    switch(escolha1) {
        case 1: printf("População: %lu x %lu\n", populacao1, populacao2); break;
        case 2: printf("Área: %.2f KM² x %.2f KM²\n", area1, area2); break;
        case 3: printf("PIB: %.2f bilhões x %.2f bilhões\n", pib1, pib2); break;
        case 4: printf("Pontos turísticos: %d x %d\n", pontosturisticos1, pontosturisticos2); break;
        case 5: printf("Densidade populacional: %.2f x %.2f\n", densidadePopulacional1, densidadePopulacional2); break;
        case 6: printf("PIB per capita: %.2f x %.2f\n", PIBperCapita1, PIBperCapita2); break;
        default: printf("Opção inválida\n");
    }
    
    switch(escolha2) {
        case 1: printf("População: %lu x %lu\n", populacao1, populacao2); break;
        case 2: printf("Área: %.2f KM² x %.2f KM²\n", area1, area2); break;
        case 3: printf("PIB: %.2f bilhões x %.2f bilhões\n", pib1, pib2); break;
        case 4: printf("Pontos turísticos: %d x %d\n", pontosturisticos1, pontosturisticos2); break;
        case 5: printf("Densidade populacional: %.2f x %.2f\n", densidadePopulacional1, densidadePopulacional2); break;
        case 6: printf("PIB per capita: %.2f x %.2f\n", PIBperCapita1, PIBperCapita2); break;
        default: printf("Opção inválida\n");
    }

    // Lógica de comparação e cálculo do vencedor
    int pontos_carta1 = 0, pontos_carta2 = 0;
    
    // Comparações usando if-else
    if (escolha1 == 1) {  // População
        if (populacao1 > populacao2) pontos_carta1++;
        else if (populacao1 < populacao2) pontos_carta2++;
    }
    else if (escolha1 == 2) {  // Área
        if (area1 > area2) pontos_carta1++;
        else if (area1 < area2) pontos_carta2++;
    }
    else if (escolha1 == 3) {  // PIB
        if (pib1 > pib2) pontos_carta1++;
        else if (pib1 < pib2) pontos_carta2++;
    }
    else if (escolha1 == 4) {  // Pontos turísticos
        if (pontosturisticos1 > pontosturisticos2) pontos_carta1++;
        else if (pontosturisticos1 < pontosturisticos2) pontos_carta2++;
    }
    else if (escolha1 == 5) {  // Densidade populacional
        if (densidadePopulacional1 > densidadePopulacional2) pontos_carta1++;
        else if (densidadePopulacional1 < densidadePopulacional2) pontos_carta2++;
    }
    else if (escolha1 == 6) {  // PIB per capita
        if (PIBperCapita1 > PIBperCapita2) pontos_carta1++;
        else if (PIBperCapita1 < PIBperCapita2) pontos_carta2++;
    }

    // Exibir resultado final
    if (pontos_carta1 > pontos_carta2) {
        printf("🏆 A primeira carta - %s - Venceu!\n", cidade1);
    } else if (pontos_carta1 < pontos_carta2) {
        printf("🏆 A segunda carta - %s - Venceu!\n", cidade2);
    } else {
        printf("⚖️ O jogo terminou em EMPATE!\n");
    }

    return 0;
}
