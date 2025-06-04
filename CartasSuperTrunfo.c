#include <stdio.h>
#include <string.h>


struct Carta {
    char estado;
    char codigo[4];
    char nomeCidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
    float superPoder;
};

int main() {
    struct Carta carta1, carta2;

    
    printf("=== Dados da Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Código (Ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", carta1.nomeCidade);

    printf("População: ");
    scanf("%lu", &carta1.populacao);

    printf("Área (km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (bilhões de reais): ");
    scanf("%f", &carta1.pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib * 1000.0 / carta1.populacao;
    carta1.superPoder = carta1.populacao + carta1.area + carta1.pib + carta1.pontosTuristicos + carta1.pibPerCapita + (1.0 / carta1.densidadePopulacional);

    
    printf("\n=== Dados da Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Código (Ex: B02): ");
    scanf("%s", carta2.codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", carta2.nomeCidade);

    printf("População: ");
    scanf("%lu", &carta2.populacao);

    printf("Área (km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (bilhões de reais): ");
    scanf("%f", &carta2.pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    
    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib * 1000.0 / carta2.populacao;
    carta2.superPoder = carta2.populacao + carta2.area + carta2.pib + carta2.pontosTuristicos + carta2.pibPerCapita + (1.0 / carta2.densidadePopulacional);

    
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %lu\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidadePopulacional);
    printf("PIB per capita: %.2f milhões/hab\n", carta1.pibPerCapita);
    printf("Super Poder: %.2f\n", carta1.superPoder);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %lu\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidadePopulacional);
    printf("PIB per capita: %.2f milhões/hab\n", carta2.pibPerCapita);
    printf("Super Poder: %.2f\n", carta2.superPoder);

    
    printf("\n=== Comparação ===\n");
    printf("Estado: %d\n", carta1.estado > carta2.estado ? 1 : 0);
    printf("Código: %d\n", strcmp(carta1.codigo, carta2.codigo) > 0 ? 1 : 0);
    printf("Nome da Cidade: %d\n", strcmp(carta1.nomeCidade, carta2.nomeCidade) > 0 ? 1 : 0);
    printf("População: %d\n", carta1.populacao > carta2.populacao ? 1 : 0);
    printf("Área: %d\n", carta1.area > carta2.area ? 1 : 0);
    printf("PIB: %d\n", carta1.pib > carta2.pib ? 1 : 0);
    printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos > carta2.pontosTuristicos ? 1 : 0);
    printf("Densidade Populacional: %d\n", carta1.densidadePopulacional < carta2.densidadePopulacional ? 1 : 0);
    printf("PIB per capita: %d\n", carta1.pibPerCapita > carta2.pibPerCapita ? 1 : 0);
    printf("Super Poder: %d\n", carta1.superPoder > carta2.superPoder ? 1 : 0);

    return 0;
}