#include <stdio.h>
int main(void){
    double a, b, c;
    scanf("%lf", &a);
    scanf("%lf", &b);
    a*=3.5;
    b*=7.5;
    c=(a+b)/11;
    printf("MEDIA = %.5f\n",c);
    return 0;
}