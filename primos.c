#include <stdlib.h>
#include <stdio.h>
 
int primo(int n){
    for(int k=2;k<n;k++){
        if(n%k==0){
            return 0;
        }
    }
    return 1;
}
 
int listaPrimos(int n){
    int qtsPrimos = 0;
    int contador = 2;
    while(qtsPrimos < n){
        if(primo(contador)){
            printf("%d,", contador);
            qtsPrimos++;
        }
        contador++;
    }
    return 0;
}
 
int main(){
    int n;
    printf("Digite n:");
    scanf("%d",&n);
    listaPrimos(n);
    return 0;
}