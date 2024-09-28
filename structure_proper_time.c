#include<stdio.h>
int main()
{
    struct Time
    {
        float hours;
        float minutes;
        float seconds;

    };
    struct Time t1,t2;
    printf("input time for 1st case hours,minutes,seconds ");
    scanf("%f%f%f",&t1.hours,&t1.minutes,&t1.seconds);
    printf("\ninput time for 2nd case hours,minutes,seconds ");
    scanf("%f%f%f",&t2.hours,&t2.minutes,&t2.seconds);
    printf("\n %f hour %f min %f sec",t1.hours+t2.hours,t1.minutes+t2.minutes,t1.seconds+t2.seconds);


}
