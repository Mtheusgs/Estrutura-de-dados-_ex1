#include <stdio.h>


int primo (int n){
    if(n%1==0 && n%n==0 && n%2!=0 && n!=1 || n==2){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int num, resultado;
    printf("Digite um número pra verificação :"); 
    scanf("%d", &num);
    resultado = primo(num); 
    printf("%d", resultado);
    return 0;
}