#include <stdio.h>
 
int main() {
float A, B, C;
scanf("%f %f %f", &A, &B, &C);  //recebendo as variáveis do usuário
printf("TRIANGULO: %.3f\n", (A*C)/2);
printf("CIRCULO: %.3f\n", 3.14159*(C*C));
printf("TRAPEZIO: %.3f\n", (A+B)*C/2);      //fazendo o calculo de cada area com os valores digitados e os exibindo 
printf("QUADRADO: %.3f\n", B*B);
printf("RETANGULO: %.3f\n", (A*B));
    return 0;
}
