#include <stdio.h>
int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if(a==b&&b==c)
        printf("equilateral");
    else if(a==b||b==c||c==a)
        printf("isosceles");
    else
        printf("scalene");
    return 0;
}
