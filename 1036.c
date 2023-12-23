#include <stdio.h>
#include <math.h>
 
int main() {
 
   double n1, n2, n3, R1,R2, delta;
   scanf("%lf %lf %lf", &n1, &n2, &n3);
   delta = pow(n2,2)-4*n1*n3;
   if(n1==0.0 || delta<0){
       printf("Impossivel calcular\n");
   }else{
   R1 = (-1*(n2)+sqrt(delta))/(2*n1);
   R2 = (-1*(n2)-sqrt(delta))/(2*n1);
   printf("R1 = %.5lf\n", R1);
   printf("R2 = %.5lf\n", R2);
   }
    return 0;
}
