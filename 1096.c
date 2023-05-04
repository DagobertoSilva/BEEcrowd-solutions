#include <stdio.h>
int main(){
int I = 1;
do{
 for(int J =7; J>=5; J--){
    printf("I=%d J=%d\n", I+=0, J);
 }
 I+=2;
}while(I!=11);
}