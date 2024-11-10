#include <stdio.h>



int dentro_ret(int x0,int y0, int x1, int y1, int x,int y){ 
    if(x0 <= x && x <= x1 && y0 <= y && y <= y1){
        return 1;
    }
    else{
        return 0;
    };
    
}

int main() {
    int x,y;
    int x0,y0,x1,y1; 
    int resultado;
    printf("Digite dois pontos de um triângulo x,y, sabendo que os pontos são os laterias de um triângulo, e o programadeterminará a ponta :  ");
    scanf("%d %d %d %d",&x0,&y0,&x1,&y1); 
    
    printf("Agora esolha um ponto e o programa determinará se faz parte do triângulo : ");
    scanf("%d %d", &x,&y);  
    
    resultado=dentro_ret(x0,y0,x1,y1,x,y); 
    
    printf("O resultado é 1 pra está contido e 0 pra não está. \nResultado : %d", resultado);
    
    
    return 0;
}