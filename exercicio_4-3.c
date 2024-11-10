#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int* elementos;
    int tamanho;
} MatrizTriangularSuperior;

MatrizTriangularSuperior* criaMatrizSuperior(int tamanho) {
    MatrizTriangularSuperior* matriz = (MatrizTriangularSuperior*)malloc(sizeof(MatrizTriangularSuperior));
    matriz->tamanho = tamanho;
    matriz->elementos = (int*)malloc((tamanho * (tamanho + 1)) / 2 * sizeof(int));
    return matriz;
}

void defineElemento(MatrizTriangularSuperior* matriz, int i, int j, int valor) {
    if (i <= j) {
        int index = (j * (j + 1)) / 2 + i;
        matriz->elementos[index] = valor;
    }
}

int obtemElemento(MatrizTriangularSuperior* matriz, int i, int j) {
    if (i <= j) {
        int index = (j * (j + 1)) / 2 + i;
        return matriz->elementos[index];
    } else {
        return 0;
    }
}

void liberaMatrizSuperior(MatrizTriangularSuperior* matriz) {
    free(matriz->elementos);
    free(matriz);
}

int main() {
    int tamanho = 3;
    MatrizTriangularSuperior* matriz = criaMatrizSuperior(tamanho);
    
    defineElemento(matriz, 0, 1, 4);
    defineElemento(matriz, 0, 2, 5);
    defineElemento(matriz, 1, 2, 6);
    
    printf("Elemento (0,2): %d\n", obtemElemento(matriz, 0, 2));
    printf("Elemento (2,0): %d\n", obtemElemento(matriz, 2, 0)); 
    
    liberaMatrizSuperior(matriz);
    return 0;
}