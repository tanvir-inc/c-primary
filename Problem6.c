#include<stdio.h>

int main(){
    float C,F;

    printf("Enter celsius temperature:");
    scanf("%f",&C);

    F= ((C*9)/5+32);
    printf("Fahrenheit temperature is %f",F);

    return 0;
}
