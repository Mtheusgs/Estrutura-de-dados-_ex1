#include <stdio.h>
#include <stdbool.h>

bool ehSimetrica(int** matriz, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (matriz[i][j] != matriz[j][i]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int tamanho = 3;
    int matriz[3][3] = {{1, 2, 3},
                        {2, 5, 6},
                        {3, 6, 9}};

    bool simetrica = ehSimetrica((int **)matriz, tamanho);
    
    if (simetrica) {
        printf("A matriz é simétrica.\n");
    } else {
        printf("A matriz não é simétrica.\n");
    }

    return 0;
}