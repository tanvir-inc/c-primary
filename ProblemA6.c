#include<stdio.h>
#include<math.h>

int main (){
    float side1, side2, side3;
  
    printf("Enter the 3 sides of a triangle: \n");
    scanf("%f%f%f",&side1,&side2,&side3);

    if(side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2){
        printf("This is a valid triangle.");
    }
    else{
        printf("This is a not valid triangle.");
    }
    return 0;
}
