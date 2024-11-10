#include <stdio.h>

void deriva(double* pol, int grau, double* out) {
    for (int i = 0; i < grau; i++) {
        out[i] = pol[i] * (grau - i);
    }
}

int main() {
    double polinomio[] = {12, 2, 3};  // Representa 3x^2 + 2x + 12
    int grau = 2;
    double derivada[grau];  // Armazena os coeficientes da derivada

    deriva(polinomio, grau, derivada);

    printf("Derivada: ");
    for (int i = 0; i < grau; i++) {
        printf("%.2f ", derivada[i]);
    }
    printf("\n");

    return 0;
}