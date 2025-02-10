#include<stdio.h>

int main(){
    int books,coupons,chocos,gums;
  
    printf("Enter the number of books: ");
    scanf("%d",&books);
  
    coupons= books;
    chocos= coupons/3;
    coupons= coupons%3;
    gums= coupons;
    printf("Tashfin will get %d chocolates & %d gums.",chocos,gums);

    return 0;
    }
