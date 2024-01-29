#include <stdio.h>

int main(){
int num_seg;
int hour, minute, seconds;
scanf("%d", &num_seg);

hour = num_seg / 3600;
minute = (num_seg % 3600) / 60;
seconds = (num_seg % 3600) % 60;
printf("%d:%d:%d\n", hour, minute, seconds);

}
