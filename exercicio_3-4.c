#include <stdio.h>
#include <math.h>

double avalia(double* pol, int grau, double x) {
    double resultado = 0.0;
    
    for (int i = 0; i <= grau; i++) {
        resultado += pol[i] * pow(x, grau - i);
    }
    
    return resultado;
}

int main() {
    double polinomio[] = {12, 2, 3};  
    int grau = 2;
    double x = 2.0;

    double resultado = avalia(polinomio, grau, x);
    printf("P(%.2f) = %.2f\n", x, resultado);

    return 0;
}