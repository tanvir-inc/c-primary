#include<stdio.h>
#include<math.h>

int main(){
    int totalChoco,nepChoco,broFinal;
    printf("Total amount of chocolates: ");
    scanf("%d",&totalChoco);

    nepChoco= (totalChoco-5)/8;
    broFinal= ((totalChoco-5)%8)+5;
    printf("Tahseen's each nephew & niece will get: %d chocolates.\n",nepChoco);
    printf("Tahseen's brothers & sisters will get: %d chocolates.",broFinal);

    return 0;
}
