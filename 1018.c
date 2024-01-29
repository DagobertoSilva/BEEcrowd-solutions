#include <stdio.h>
#include <math.h>
int main(){
int notas[] = {100,50,20,10,5,2,1};
int qtd_notas=0;
long long int n;
scanf("%lld", &n);
printf("%lld\n",n);
for(int i = 0; i<7; i++){
        qtd_notas*=0;
        if(n%notas[i]>= 0 && n>0){
           qtd_notas = n/notas[i];
           n = n%notas[i];
           printf("%d nota(s) de R$ %d,00\n", qtd_notas, notas[i]);
        }else{
            printf("0 nota(s) de R$ %d,00\n",notas[i]);
        }

}

}
