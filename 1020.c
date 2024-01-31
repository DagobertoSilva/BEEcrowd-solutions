#include <stdio.h>

int main() {
int d, years, months, days;
scanf("%d", &d);
years = d/365;
months = (d % 365)/30;
days = (d%365)%30;
printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, months, days);
    return 0;
}
