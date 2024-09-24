#include <stdio.h>
#include <stdlib.h>

typedef struct ponto {
    int x;
    int y;
} Ponto;

typedef struct circulo {
    Ponto p;
    int raio;
} Circulo;

void mostraCirculo(Circulo *c) {
    printf("Circulo: Centro (%d, %d), Raio: %d\n", c->p.x, c->p.y, c->raio);
}

int main() {
    Circulo c1;
    Circulo *c3;

    printf("Digite as coordenadas do centro do circulo (x y): ");
    scanf("%d %d", &c1.p.x, &c1.p.y);
    printf("Digite o raio do circulo: ");
    scanf("%d", &c1.raio);

    c3 = &c1;

    printf("Digite novas coordenadas do centro do circulo (x y): ");
    scanf("%d %d", &c3->p.x, &c3->p.y);
    printf("Digite um novo raio para o circulo: ");
    scanf("%d", &c3->raio);

    printf("Valores de c1:\n");
    mostraCirculo(&c1);

    printf("Valores de c3:\n");
    mostraCirculo(c3);

    return 0;
}
