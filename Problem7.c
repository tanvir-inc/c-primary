#include<stdio.h>

int main(){
    float F,C;

    printf("Enter fahrenheit temperature:");
    scanf("%f",&F);

    C= (F-32)*5/9;
    printf("Celsius temperature is %f",C);

    return 0;
}
