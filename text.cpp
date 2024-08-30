#include<stdio.h>

int main(){

    int a,b;
    float c,d;

    scanf("%i %i",&a,&b);
    scanf("%f %f",&c,&d);

    printf("%i %i\n",a+b,a-b);
    printf("%0.1f %0.1f",c+d,c-d);
    
    
return 0;
}