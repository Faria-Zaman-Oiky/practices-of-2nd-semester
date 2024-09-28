#include<stdio.h>
int main()
{
    char s[30];
    printf("enter the string ");
    gets(s);
    int i,len=0;
    for(i=0;s[i]!=0;i++)
    {
        len++;
    }
    printf("length is %d",len);
    return 0;
}
