#include<stdio.h>
#include<math.h>

int main (){
    float a1,a2,a3;

    printf("Enter the 3 angles of a triangle: \n");
    scanf("%f%f%f",&a1,&a2,&a3);

    if(a1 + a2 + a3 == 180){
        printf("This is a valid triangle.");
    }
    else {
        printf("This is a not valid triangle.");
    }
    return 0;
}
