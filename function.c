#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter the two numbers ");
    scanf("%d%d",&num1,&num2);
    printf("the sum is %d",sum(num1,num2));
}
int sum(int a,int b)
{
    return a+b;
}
