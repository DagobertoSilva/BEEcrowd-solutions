#include <stdio.h>
 
int main() {
 int N, d; //N é o numero que vou receber e d é a variável que vai armazenar os restos
scanf("%d", &N); //lendo o número digitado 
for(int i=1; N>=i;i++){ //contador vai ate o numero que digitei, sendo somado mais 1
    d = N%i; // restos das divisões
    if(d==0){ // estou vendo onde o numero é divisivel, pois se o resto dor 0 o numero é divisivel por aquele numero;
        printf("%d\n", i);// aqui imprimo os divisores do número digitado
    }
}
 
    return 0;
}
