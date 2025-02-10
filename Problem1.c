#include<stdio.h>

int main(){
    int a,square,cube;

    printf("Enter a number:");
    scanf("%d",&a);

    square= a*a;
    printf("The square value is %d",square);

    cube= a*a*a;
    printf("The cube value is %d",cube);

    return 0;
}
