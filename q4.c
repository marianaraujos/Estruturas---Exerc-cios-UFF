#include <stdio.h>

typedef struct ponto {
    int x;
    int y;
} Ponto;

typedef struct circulo {
    Ponto p;
    int raio;
} Circulo;

void mostraCirculo(Circulo *c) {
    printf("Centro do circulo: (%d, %d)\n", c->p.x, c->p.y);
    printf("Raio do circulo: %d\n", c->raio);
}

int main() {
    Circulo c;

    printf("Insira as coordenadas do centro do circulo (x y): ");
    scanf("%d %d", &c.p.x, &c.p.y);

    printf("Insira o raio do circulo: ");
    scanf("%d", &c.raio);

    mostraCirculo(&c);

    return 0;
}
