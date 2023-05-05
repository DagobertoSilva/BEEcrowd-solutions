#include <stdio.h>
 
int main() {
 
int cod1, cod2,unidades1, unidades2;
float preco1, preco2;                        //declaração das variáveis

scanf("%d", &cod1);
scanf("%d", &unidades1);
scanf("%f", &preco1);
scanf("%d", &cod2);                        //recebendo os valores do usuário
scanf("%d", &unidades2);
scanf("%f", &preco2);
printf("VALOR A PAGAR: R$ %.2f\n",(float) (preco1*unidades1)+(preco2*unidades2)); // calculando e mostrando o resultado
 
    return 0;
}