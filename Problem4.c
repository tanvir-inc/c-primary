#include<stdio.h>

int main(){
    float r,h,vol;

    printf("Enter radius:");
    scanf("%f",&r);
    printf("Enter height:");
    scanf("%f",&h);

    vol= 3.14*r*r*h;
    printf("The volume is %d",vol);

    return 0;
}
