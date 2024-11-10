#include <stdio.h> 

int fibonacci (int n) { 
    int num0= 0; 
    int num1=1;
    int soma=0; 
    printf("%d\n%d\n", num0, num1);
    for(int i=0;i<n-1;i++){ 
        soma=num0+num1;
        printf("%d\n", soma);  
        num0=num1;
        num1=soma;
        
    }
}

int main()
{
    int n;
    printf("Montrando o n-ésimo termo da série de Fibonacci, digite n: \n"); 
    scanf("%d", &n); 
    fibonacci(n);

    return 0;
}