#include <stdio.h> 

void calc_esfera(float r, float* area, float* volume){
    *area = 4*(r*r);
    *volume=4*((r*r*r)/3);
}


int main(){
    float area,r,volume; 
    printf("Digite o raio, area e volume da esfera respectivamente :  ");
    scanf("%f",&r); 
    calc_esfera(r,&area,&volume);
    printf("A area da esfela é %f e seu volume %f",area, volume);
    return 0;
}