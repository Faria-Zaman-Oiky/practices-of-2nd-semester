#include<stdio.h>
int main()
{
    struct Time
    {
        int hours;
        int minutes;
        int sec;

    };struct Time t1,t2,result;
    printf("input case  1 hour ,min,sec ");
    scanf("%d%d%d",&t1.hours,&t1.minutes,&t1.sec);
    printf("input case  2 hour ,min,sec ");
    scanf("%d%d%d",&t2.hours,&t2.minutes,&t2.sec);
    result.sec=t1.sec+t2.sec;
    result.minutes=t1.minutes+t2.minutes+result.sec/60;
    result.hours=t1.hours+t2.hours+result.minutes/60;
    result.sec=result.sec%60;
    result.minutes=result.minutes%60;
    printf("%d:%d:%d",result.hours,result.minutes,result.sec);


}
