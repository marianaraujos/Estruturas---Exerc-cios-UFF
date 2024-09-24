#include <stdio.h>

typedef struct ponto {
    int x;
    int y;
} Ponto;

typedef struct circulo {
    Ponto p;
    int raio;
} Circulo;

int main() {
    Circulo c1;

    printf("Digite o valor de x: ");
    scanf("%d", &c1.p.x);

    printf("Digite o valor de y: ");
    scanf("%d", &c1.p.y);

    printf("Digite o valor do raio: ");
    scanf("%d", &c1.raio);

    printf("Valores do circulo:\n");
    printf("Centro: (%d, %d)\n", c1.p.x, c1.p.y);
    printf("Raio: %d\n", c1.raio);

    return 0;
}
