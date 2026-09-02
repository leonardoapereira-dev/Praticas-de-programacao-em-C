#include <stdio.h>

#define MAX_CARROS 5

// Struct sem ponteiros, conforme pedido no enunciado
typedef struct {
    int id;
    char marca[50];
    char modelo[50];
    int ano;
    float capacidadeTanque; // em litros
    float consumoMedio;     // em km/l
} Carro;

int main() {
    Carro carros[MAX_CARROS];
    float autonomias[MAX_CARROS];
    int i;

    printf("=== CADASTRO DE CARROS ===\n");

    for (i = 0; i < MAX_CARROS; i++) {
        printf("\n--- Carro %d de %d ---\n", i + 1, MAX_CARROS);

        printf("ID: ");
        scanf("%d", &carros[i].id);

        printf("Marca (sem espacos): ");
        scanf("%s", carros[i].marca);

        printf("Modelo (sem espacos): ");
        scanf("%s", carros[i].modelo);

        printf("Ano: ");
        scanf("%d", &carros[i].ano);

        printf("Capacidade do tanque (litros): ");
        scanf("%f", &carros[i].capacidadeTanque);

        printf("Consumo medio (km/l): ");
        scanf("%f", &carros[i].consumoMedio);

        // Calcula a autonomia de cada carro assim que ele e cadastrado
        autonomias[i] = carros[i].capacidadeTanque * carros[i].consumoMedio;
    }

    printf("\n=== CARROS CADASTRADOS ===\n");
    for (i = 0; i < MAX_CARROS; i++) {
        printf("\nCarro %d\n", i + 1);
        printf("ID: %d\n", carros[i].id);
        printf("Marca: %s\n", carros[i].marca);
        printf("Modelo: %s\n", carros[i].modelo);
        printf("Ano: %d\n", carros[i].ano);
        printf("Capacidade do tanque: %.2f litros\n", carros[i].capacidadeTanque);
        printf("Consumo medio: %.2f km/l\n", carros[i].consumoMedio);
        printf("Autonomia: %.2f km\n", autonomias[i]);
    }

    return 0;
}