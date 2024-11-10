#include <stdio.h> 
#include <math.h>

int raizes(float a, float b, float c, float* x, float* y){ 
    float discriminante = (b*b)-(4*a*c); 

    if(discriminante<0){
        printf("As raizes são complexas pois discriminate deu %f", discriminante); 
        return -1;
    };

    float raiz=sqrt(discriminante);
    *x= (-b + raiz)/(2*a);
    *y= (-b - raiz)/(2*a);
    return 0;
} 

int main(){ 
    float a,b,c,x,y;
    printf("Escolha a, b,c de acordo com a equação (ax^2+bx+c=0), para descobrir as raizes : ");
    scanf ("%f %f %f", &a,&b,&c); 
    raizes(a,b,c,&x,&y); 
    if(x==y){
        printf("Raiz unica igual a %f",x); 
        return 0;
    }
    printf("%f %f",x, y);
    return 0;
}