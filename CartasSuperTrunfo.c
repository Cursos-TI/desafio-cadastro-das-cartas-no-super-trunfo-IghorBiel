#include <stdio.h>

#define NUM_ESTADOS 8
#define CIDADES_POR_ESTADO 4

typedef struct {
    char codigo[4];
    int populacao;
    float area; 
    float pib; 
    int num_pontos_turistico;
} Carta;

int main() {
    Carta cartas[NUM_ESTADOS][CIDADES_POR_ESTADO];
    
    for (char estado = 'A'; estado < 'A' + NUM_ESTADOS; estado++) {
        for (int cidade = 0; cidade < CIDADES_POR_ESTADO; cidade++) {
            
            sprintf(cartas[estado - 'A'][cidade].codigo, "%c%02d", estado, cidade + 1);

            
            printf("Cadastro da carta para %s:\n", cartas[estado - 'A'][cidade].codigo);
            printf("População: ");
            scanf("%d", &cartas[estado - 'A'][cidade].populacao);
            printf("Área (km²): ");
            scanf("%f", &cartas[estado - 'A'][cidade].area);
            printf("PIB (milhões de USD): ");
            scanf("%f", &cartas[estado - 'A'][cidade].pib);
            printf("Número de pontos turísticos: ");
            scanf("%d", &cartas[estado - 'A'][cidade].num_pontos_turistico);
            printf("\n");
        }
    }

    
    printf("Dados cadastrados:\n");
    for (char estado = 'A'; estado < 'A' + NUM_ESTADOS; estado++) {
        for (int cidade = 0; cidade < CIDADES_POR_ESTADO; cidade++) {
            Carta c = cartas[estado - 'A'][cidade];
            printf("Código: %s\n", c.codigo);
            printf("População: %d\n", c.populacao);
            printf("Área: %.2f km²\n", c.area);
            printf("PIB: %.2f milhões de USD\n", c.pib);
            printf("Número de pontos turísticos: %d\n\n", c.num_pontos_turistico);
        }
    }

    return 0;
}
