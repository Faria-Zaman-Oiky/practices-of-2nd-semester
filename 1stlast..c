#include<stdio.h>
int main()
{
    int i,n,first,last;
    scanf("%d",&n);
first=n;
for(i=1;first>=10;i++)
{
    first=n/10;

}printf("%d",first);
last=n%10;
printf("\n%d",last);
}
