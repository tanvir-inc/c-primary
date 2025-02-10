#include<stdio.h>

int main(){
    int marNum,marLength,volMar,boxLength,volBox;

    printf("Enter box length value: ");
    scanf("%d",&boxLength);
    printf("Enter marble length value: ");
    scanf("%d",&marLength);

    volMar= marLength*marLength*marLength;
    volBox= boxLength*boxLength*boxLength;
    marNum= volBox/volMar;
    printf("The number of marble is: %d",marNum);

    return 0;
    }
