#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b)
    {
        if(a<c)
            printf("minimum is a ");
        else
            printf("minimum is c");
    }
    if(b<c)
       printf("minimum is b");
        else
        printf("minimum is c");

        return 0;
}
