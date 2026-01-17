#include <stdio.h>
#include <string.h>
int main() {

    // Cartas já cadastradas
    char Pais1[] = "Brasil";
    char Pais2[] = "Argentina";
    int Populacao1 = 203000000;
    int Populacao2 = 46000000;
    float Area1 = 8515767.0;
    float Area2 = 2780400.0;
    float PIB1 = 2100000.0; // em bilhões
    float PIB2 = 640000.0;  // em bilhões
    int PontosTuristicos1 = 25;
    int PontosTuristicos2 = 18;
    float Densidade1 = Populacao1 / Area1;
    float Densidade2 = Populacao2 / Area2;
    int Opcao;

    // Menu Interativo
    printf("SUPER TRUNFO - COMPARAÇÃO\n");
    printf("Escolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &Opcao);

    printf("\nComparação entre %s e %s\n", Pais1, Pais2);

    switch (Opcao) {

        case 1: // População
            printf("Atributo: População\n");
            printf("%s: %d\n", Pais1, Populacao1);
            printf("%s: %d\n", Pais2, Populacao2);

            if (Populacao1 > Populacao2) {
                printf("Vencedor: %s\n", Pais1);
            } else if (Populacao2 > Populacao1) {
                printf("Vencedor: %s\n", Pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Área
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", Pais1, Area1);
            printf("%s: %.2f km²\n", Pais2, Area2);

            if (Area1 > Area2) {
                printf("Vencedor: %s\n", Pais1);
            } else if (Area2 > Area1) {
                printf("Vencedor: %s\n", Pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões\n", Pais1, PIB1);
            printf("%s: %.2f bilhões\n", Pais2, PIB2);

            if (PIB1 > PIB2) {
                printf("Vencedor: %s\n", Pais1);
            } else if (PIB2 > PIB1) {
                printf("Vencedor: %s\n", Pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Pontos Turísticos
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d\n", Pais1, PontosTuristicos1);
            printf("%s: %d\n", Pais2, PontosTuristicos2);

            if (PontosTuristicos1 > PontosTuristicos2) {
                printf("Vencedor: %s\n", Pais1);
            } else if (PontosTuristicos2 > PontosTuristicos1) {
                printf("Vencedor: %s\n", Pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade Demográfica (regra invertida)
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", Pais1, Densidade1);
            printf("%s: %.2f hab/km²\n", Pais2, Densidade2);

            if (Densidade1 < Densidade2) {
                printf("Vencedor: %s\n", Pais1);
            } else if (Densidade2 < Densidade1) {
                printf("Vencedor: %s\n", Pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Escolha uma opção de 1 a 5.\n");
    }

    return 0;
}
