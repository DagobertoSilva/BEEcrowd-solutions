#include <stdio.h>

int main() {

    float n1, n2, n3, n4, exam, media, novamedia;

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    printf("%", n1);
    media = ((n1*2) + (n2*3) + (n3 * 4) + (n4 * 1)) / (2 + 3 + 4 + 1);

    printf("Media: %.1f\n", media);

    if(media >= 7.0){
        printf("Aluno aprovado.\n");
    }

    if(media < 5.0){
        printf("Aluno reprovado.\n");
    }

    if(media>= 5.0 && media < 7){
        printf("Aluno em exame.\n");
        scanf("%f", &exam);

         printf("Nota do exame: %.1f\n", exam);

        novamedia = (media + exam) / 2;

        if(novamedia >= 5.0){
            printf("Aluno aprovado.\n");
        }else{
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1f\n", novamedia);
    }
    return 0;
}
