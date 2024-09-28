#include<stdio.h>
int main()
{
    int x=5,y=10;
    int sum;
    int *p,*q;
    p=&x;
    q=&y;
    sum=*p+*q;
    printf(" sum is %d",sum);
}
