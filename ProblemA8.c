#include<stdio.h>
#include<math.h>

int main (){
    int num1, num2;

    printf("Enter both numbers: \n");
    scanf("%d%d",&num1,&num2);

    if(num1%num2 == 0 && num2%num1 == 0){
        printf("Both is divisible by each other.");
    }
    else if(num1%num2 == 0 || num2%num1 == 0){
        printf("Only one is divisible by another.");
    }
    else{
        printf("None is divisible by other.");
    }
    return 0;
}
