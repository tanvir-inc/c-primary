#include<stdio.h>
#include<math.h>

int main(){
    int x,y,z;
    printf("Enter how much people are in the line:");
    scanf("%d",&x);
    printf("Enter how much people can accommodate:");
    scanf("%d",&y);

    z = (x + y -1)/y;
    printf("The elevator will operate %d times to serve all those people in queue.",z);

    return 0;
}
