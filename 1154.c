#include <stdio.h>
 
int main() {
int age, i=0, soma=0;
while(1){  // enquanto for verdade 
scanf("%d", &age); //quero que peça um valor para idade 
if(age<0){ //se a idade for  um número menor que 0
    break; // o número não vai ser lido
}
soma+=age; //os números digitados serão somados 
i++; 
}
printf("%.2f\n",(float) soma/i); //faço que a media dos numeros seja obrigatoriamente do tipo float com duas casas decimais
return 0;
}