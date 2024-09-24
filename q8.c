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
    printf("Circulo:\n");
    printf("Centro: (%d, %d)\n", c->p.x, c->p.y);
    printf("Raio: %d\n", c->raio);
}

void mostraCirculoVetor(Circulo *c, int n) {
    for (int i = 0; i < n; i++) {
        printf("Circulo %d:\n", i + 1);
        mostraCirculo(&c[i]);  
    }
}

void leCirculos(Circulo *c, int n) {
    for (int i = 0; i < n; i++) {
        printf("Digite as coordenadas do centro do circulo %d (x y): ", i + 1);
        scanf("%d %d", &c[i].p.x, &c[i].p.y);
        printf("Digite o raio do circulo %d: ", i + 1);
        scanf("%d", &c[i].raio);
    }
}

int main() {
    int n;

    printf("Quantos circulos você deseja criar? ");
    scanf("%d", &n);

    Circulo circulos[n]; 

    leCirculos(circulos, n); 
    mostraCirculoVetor(circulos, n); 

    return 0;
}
