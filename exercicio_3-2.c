#include <stdio.h>   


int pares(int n, int* vet){  
    int count=0;
    for(int i=0;i<n;i++){
        if(vet[i]%2!=0){
            count++;
        }
    } 
    printf("O numero de pares é %d", count);

};


int main(){
    int vet[]= {1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(vet)/sizeof(vet[0]);
    pares(n,vet);
};