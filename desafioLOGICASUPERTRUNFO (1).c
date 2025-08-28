#include <stdio.h>

int main() {
    // Variáveis da carta 1
    char estado1[20], codigo1[10], cidade1[30];
    int populacao1, pontos1;
    float area1,pib1;

    //Variáveis da carta
    char estado2[20], codigo2[10], cidade2[30];
    int populacao2, pontos2;
    float area2, pib2;

    // Cadastro da carta 1
    printf("Cadastro da Carta 1\n");
    printf("Digite o estado: ");
    scanf("%s", estado1);
    printf("Digite o codigo da carta: ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);
    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a area em km²: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // Cadastro da carta 2
    printf("\nCadastro da Carta 2\n");
    printf("Digite o estado: ");
    scanf("%s", estado2);
    printf("Digite o codigo da carta: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a area em km²: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // Mostrar os dados das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);

    // Comparação (pela populacao)
    printf("\nComparacao entre as cartas (pela populacao):\n");
    if (populacao1 > populacao2) {
        printf("A cidade vencedora e: %s com populacao de %d\n", cidade1, populacao1);
    } else {
        if (populacao2 > populacao1) {
            printf("A cidade vencedora e: %s com populacao de %d\n", cidade2, populacao2);
        } else {
            printf("As duas cidades tem a mesma populacao!\n");
        }
    }

    return 0;
}
