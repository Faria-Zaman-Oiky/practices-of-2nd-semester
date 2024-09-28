#include<stdio.h>
int main()
{
    int x;
    x=3;
    printf("value of x is %d ",x);
    printf("address of x is %d ",&x);
    int *p;
    p=&x;
    printf("value of p is %d",p);
    printf("the value of the variable that p is addressing %d",*p);
    printf("address of p is %d   ",&p);

}
