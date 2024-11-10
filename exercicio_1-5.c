#include <stdio.h>

double pi(int n) {
    double pi = 0.0;  
    int sign = 1; 
    
    for (int i = 1; i < n; i += 2) {  
        double term = 1.0 / i;  
        
        
        pi += sign * term;
        
        
        sign = -sign;
        
        printf("Termo: 1/%d = %.6f, Pi até agora: %.6f\n", i, term, 4 * pi);
    }
    
    return 4 * pi;  
}

int main() {
    int n;
    printf("Cálculo de pi, aproximadamente 3,14\n");
    printf("Digite o número de termos: ");
    scanf("%d", &n); 
    
    double piValue = pi(n);  
    printf("Valor aproximado de pi: %.6f\n", piValue);  
    return 0;
}