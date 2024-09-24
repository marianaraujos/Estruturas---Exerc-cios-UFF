#include <stdio.h>

// Definição das estruturas
typedef struct ponto {
    int x;
    int y;
} Ponto;

typedef struct circulo {
    Ponto p;
    int raio;
} Circulo;

int main() {
    Ponto p1;  

    printf("Digite o valor de x: ");
    scanf("%d", &p1.x);  

    printf("Digite o valor de y: ");
    scanf("%d", &p1.y);  

    printf("Ponto p1: (%d, %d)\n", p1.x, p1.y);

    return 0;
}
