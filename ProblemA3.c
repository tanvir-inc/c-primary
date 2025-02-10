#include<stdio.h>
#include<math.h>

int main(){
    float km,total_distance;
    int time,total_time,total_bill;

    printf("Enter the distance traveled in KiloMeter:");
    scanf("%f",&km);

    total_distance= ceil(km)*20;
    printf("Enter how much time it took time:");
    scanf("%d",&time);
    total_time= time*2;
    total_bill= total_distance+total_time;

    printf("Total bill is %d taka",total_bill);

    return 0;
}
