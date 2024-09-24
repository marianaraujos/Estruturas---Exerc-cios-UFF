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

int main() {
    Circulo *c2 = (Circulo *)malloc(sizeof(Circulo));

    c2->p.x = 0;
    c2->p.y = 0;
    c2->raio = 0;

    printf("Digite o valor de x: ");
    scanf("%d", &(c2->p.x));

    printf("Digite o valor de y: ");
    scanf("%d", &(c2->p.y));

    printf("Digite o valor do raio: ");
    scanf("%d", &(c2->raio));

    // Exibindo os valores fornecidos pelo usuário
    printf("Valores>>\n");
    printf("Centro do circulo (x, y): (%d, %d)\n", c2->p.x, c2->p.y);
    printf("Raio: %d\n", c2->raio);


    return 0;
}
