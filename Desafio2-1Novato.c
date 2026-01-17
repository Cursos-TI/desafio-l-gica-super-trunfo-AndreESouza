#include <stdio.h>
int main() {

    // Variáveis da Carta 1
    char Estado1;
    char Codigo1[4];
    char Cidade1[50];
    int Populacao1;
    float Area1;
    float PIB1;
    int PontosTuristicos1;
    float Densidade1;
    float PIBPerCapita1;

    // Variáveis da Carta 2
    char Estado2;
    char Codigo2[4];
    char Cidade2[50];
    int Populacao2;
    float Area2;
    float PIB2;
    int PontosTuristicos2;
    float Densidade2;
    float PIBPerCapita2;

   // Entrada dos dados da Carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Estado (OBS: Digite uma letra entre: A e H): ");
    scanf(" %c", &Estado1);

    printf("Código da Carta (OBS: Digite a mesma letra que você colocou para Estado; juntamente com o numeral entre: 01 e 04): ");
    scanf("%s", Codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", Cidade1);

    printf("População: ");
    scanf("%d", &Populacao1);

    printf("Área (km²): ");
    scanf("%f", &Area1);

    printf("PIB: ");
    scanf("%f", &PIB1);

    printf("Número de Pontos Turisticos: ");
    scanf("%d", &PontosTuristicos1);

    // Cálculos da Carta 1
    Densidade1 = Populacao1 / Area1;
    PIBPerCapita1 = PIB1 / Populacao1;

    // Entrada dos dados da Carta 2
    printf("\nCadastro da Carta 2:\n");

    printf("Estado (OBS: Digite uma letra entre: A e H): ");
    scanf(" %c", &Estado2);

    printf("Código da Carta (OBS: Digite a mesma letra que você colocou para Estado; juntamente com o numeral entre: 01 e 04): ");
    scanf("%s", Codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", Cidade2);

    printf("População: ");
    scanf("%d", &Populacao2);

    printf("Área (km²): ");
    scanf("%f", &Area2);

    printf("PIB: ");
    scanf("%f", &PIB2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &PontosTuristicos2);

    // Cálculos da Carta 2
    Densidade2 = Populacao2 / Area2;
    PIBPerCapita2 = PIB2 / Populacao2;

    // Comparação
    printf("\nComparação de cartas (Atributo: População)\n\n");

    printf("Carta 1 - %s (%s): %d habitantes\n",
           Cidade1, Estado1, Populacao1);

    printf("Carta 2 - %s (%s): %d habitantes\n\n",
           Cidade2, Estado2, Populacao2);

    if (Populacao1 > Populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", Cidade1);
    } else if (Populacao2 > Populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", Cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
