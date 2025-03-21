#include <stdio.h>

int main (){

    // primeira carta 
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    //entrada de dados para a primeira carta 
    printf("Digite a letra do primeiro estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o código da primeira carta (EX: A01): \n");
    scanf(" %3s", codigo1);

    printf("Digite o nome da primeira cidade: \n");
    scanf(" %[^\n]", cidade1);                  // para ler a string

    printf("Informe a população: \n");
    scanf("%d", &populacao1);

    printf("informe a área em km²: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos1);

    // segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    //entrada de dados da segunda carta
    printf("Digite a letra do segundo estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da segunda carta (EX: A01): \n");
    scanf(" %3s", codigo2);

    printf("Digite o nome da segunda cidade: \n");
    scanf(" %[^\n]", cidade2);                  // para ler a string

    printf("Informe a população: \n");
    scanf("%d", &populacao2);

    printf("informe a área em km²: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos2);

    // menu para escolha de um cretério de comparação

    int opcao;
    printf("\nEscolha um criterio para comparação: \n");
    printf("1- População\n2 - Área\n3 - PIB\n4 - Número de pontos turisticos\n");
    printf("Digite o numero da opção desejada: \n");
    scanf("%d", &opcao);

    // Determinando a carta vencedora 

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