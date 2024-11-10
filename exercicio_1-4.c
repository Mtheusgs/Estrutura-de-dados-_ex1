#include <stdio.h> 

int soma_impares (int n) { 
    int soma=0;
    for(int i=0;i<n;i++){
        if(i%2!=0){ 
           soma=soma+i ;
        }
    }
    printf("%d", soma);
}

int main()
{
    int n;
    printf("soma de número impares até n, determine n: \n"); 
    scanf("%d", &n); 
    soma_impares(n);
    return 0;
}