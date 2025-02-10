#include<stdio.h>

int main(){
    float r,area,circum;

    printf("Enter radius:");
    scanf("%f",&r);

    area= 3.14*r*r;
    printf("The area is %f",area);

    circum= 2*3.14*r;
    printf("The circumference is %f",circum);

    return 0;
}
