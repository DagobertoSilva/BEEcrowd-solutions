#include <stdio.h>
#include <locale.h>
int main() {
 setlocale(LC_ALL, "Portuguese");
    int A,B,C,D;
    scanf("%d %d %d %d", &A, &B, &C, &D);
    if((B>C) && (D>A) && ((C+D) > (A+B)) && (C && D > 0) && (A%2==0)){
        printf("Valores aceitos\n");
    }else{
        printf("Valores não aceitos\n");
    }
    return 0;
}
