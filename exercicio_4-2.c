#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int* elementos;
    int tamanho;
} MatrizTriangularInferior;

MatrizTriangularInferior* criaMatrizInferior(int tamanho) {
    MatrizTriangularInferior* matriz = (MatrizTriangularInferior*)malloc(sizeof(MatrizTriangularInferior));
    matriz->tamanho = tamanho;
    matriz->elementos = (int*)malloc((tamanho * (tamanho + 1)) / 2 * sizeof(int));
    return matriz;
}

void defineElemento(MatrizTriangularInferior* matriz, int i, int j, int valor) {
    if (i >= j) {
        int index = (i * (i + 1)) / 2 + j;
        matriz->elementos[index] = valor;
    }
}

int obtemElemento(MatrizTriangularInferior* matriz, int i, int j) {
    if (i >= j) {
        int index = (i * (i + 1)) / 2 + j;
        return matriz->elementos[index];
    } else {
        return 0;  // Elemento acima da diagonal principal é zero
    }
}

void liberaMatrizInferior(MatrizTriangularInferior* matriz) {
    free(matriz->elementos);
    free(matriz);
}

int main() {
    int tamanho = 3;
    MatrizTriangularInferior* matriz = criaMatrizInferior(tamanho);
    
    defineElemento(matriz, 1, 0, 2);
    defineElemento(matriz, 2, 0, 3);
    defineElemento(matriz, 2, 2, 5);
    
    printf("Elemento (2,0): %d\n", obtemElemento(matriz, 2, 0));
    printf("Elemento (0,1): %d\n", obtemElemento(matriz, 0, 1));  // Deve ser 0
    
    liberaMatrizInferior(matriz);
    return 0;
}