#include <stdio.h>
#include <string.h>

    // Estrutura da carta
    typedef struct {
    char Nome[30];
    int Populacao;
    float Area;
    float PIB;
    float Densidade;
   } Carta;

// Função para mostrar menu de atributos
void MostrarMenu(int AtributoBloqueado) {
    printf("\nEscolha um atributo:\n");

    if (AtributoBloqueado != 1)
        printf("1 - População\n");
    if (AtributoBloqueado != 2)
        printf("2 - Área\n");
    if (AtributoBloqueado != 3)
        printf("3 - PIB\n");
    if (AtributoBloqueado != 4)
        printf("4 - Densidade Demográfica\n");

    printf("Opção: ");
}

// Função para obter valor do atributo
float ObterValor(Carta c, int Atributo) {
    switch (Atributo) {
        case 1: return (float)c.Populacao;
        case 2: return c.Area;
        case 3: return c.PIB;
        case 4: return c.Densidade;
        default:

        return 0;
    }
}

// Função para obter nome do atributo
const char* NomeAtributo(int Atributo) {
    switch (Atributo) {
        case 1: return "População";
        case 2: return "Área";
        case 3: return "PIB";
        case 4: return "Densidade Demográfica";
        default: return "Desconhecido";
    }
}

int main() {
    // Cartas pré-cadastradas
    Carta Carta1 = {"Brasil", 214000000, 8515767, 1900, 25.1};
    Carta Carta2 = {"Canadá", 38000000, 9984670, 2100, 3.8};

    int Atributo1 = 0;
    int Atributo2 = 0;

    // Escolha do primeiro atributo
    MostrarMenu(0);
    scanf("%d", &Atributo1);

    if (Atributo1 < 1 || Atributo1 > 4) {
        printf("Opção inválida!\n");
        return 1;
    }

    // Escolha do segundo atributo (menu dinâmico)
    MostrarMenu(Atributo1);
    scanf("%d", &Atributo2);

    if (Atributo2 < 1 || Atributo2 > 4 || Atributo2 == Atributo1) {
        printf("Opção inválida!\n");
        return 1;
    }

    // Obter valores
    float v1_a1 = ObterValor(Carta1, Atributo1);
    float v2_a1 = ObterValor(Carta2, Atributo1);

    float v1_a2 = ObterValor(Carta1, Atributo2);
    float v2_a2 = ObterValor(Carta2, Atributo2);

    // Comparação individual (regra especial para densidade)
    int Ponto1 = 0, Ponto2 = 0;

    Ponto1 += (Atributo1 == 4) ? (v1_a1 < v2_a1) : (v1_a1 > v2_a1);
    Ponto2 += (Atributo1 == 4) ? (v2_a1 < v1_a1) : (v2_a1 > v1_a1);

    Ponto1 += (Atributo2 == 4) ? (v1_a2 < v2_a2) : (v1_a2 > v2_a2);
    Ponto2 += (Atributo2 == 4) ? (v2_a2 < v1_a2) : (v2_a2 > v1_a2);

    // Soma dos atributos
    float soma1 = v1_a1 + v1_a2;
    float soma2 = v2_a1 + v2_a2;

    // Resultado final
    printf("\nRESULTADO\n");
    printf("País 1: %s\n", Carta1.Nome);
    printf("País 2: %s\n\n", Carta2.Nome);

    printf("%s:\n", NomeAtributo(Atributo1));
    printf("  %s: %.2f\n", Carta1.Nome, v1_a1);
    printf("  %s: %.2f\n\n", Carta2.Nome, v2_a1);

    printf("%s:\n", NomeAtributo(Atributo2));
    printf("  %s: %.2f\n", Carta1.Nome, v1_a2);
    printf("  %s: %.2f\n\n", Carta2.Nome, v2_a2);
    printf("Soma dos atributos:\n");
    printf("  %s: %.2f\n", Carta1.Nome, soma1);
    printf("  %s: %.2f\n\n", Carta2.Nome, soma2);

    // Decisão final com operador ternário
    if (soma1 == soma2)
        printf("Resultado final: EMPATE!\n");
    else
        printf("Resultado final: %s venceu!\n", (soma1 > soma2) ? Carta1.Nome : Carta2.Nome);

    return 0;
}
