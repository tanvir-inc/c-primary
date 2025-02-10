#include<stdio.h>

int main(){
    int marks1,marks2,marks3,marks4,marks5;
    float totalMarks,percentage;
  
    printf("Enter marks for subject 1:");
    scanf("%d",&marks1);
    printf("Enter marks for subject 2:");
    scanf("%d",&marks2);
    printf("Enter marks for subject 3:");
    scanf("%d",&marks3);
    printf("Enter marks for subject 4:");
    scanf("%d",&marks4);
    printf("Enter marks for subject 5:");
    scanf("%d",&marks5);
  
    totalMarks= marks1+marks2+marks3+marks4+marks5;
    percentage= (totalMarks/500)*100.00;
    printf("Total Marks: %.2f\n",totalMarks);
    printf("Percentage: %.2f\n",percentage);

    return 0;
}
