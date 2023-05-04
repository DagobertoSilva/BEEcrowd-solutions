#include <stdio.h>
 
int main() {
 int N, d;
scanf("%d", &N);
for(int i=1; N>=i;i++){
    d = N%i;
    if(d==0){
        printf("%d\n", i);
    }
}
 
    return 0;
}