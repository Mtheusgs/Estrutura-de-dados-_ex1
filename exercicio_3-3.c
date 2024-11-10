#include <stdio.h>   


void inverter_ordem(int n, int* vet) {   
    int posicao;
    for (int i = 0; i < n / 2; i++) {
        posicao = n - 1 - i;
        int temp = vet[i];
        vet[i] = vet[posicao];
        vet[posicao] = temp;
    } 


    for (int i = 0; i < n; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");
}

int main() {
    int vet[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(vet) / sizeof(vet[0]);
    inverter_ordem(n, vet);
    return 0;
}