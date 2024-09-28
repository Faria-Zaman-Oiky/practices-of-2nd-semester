#include<stdio.h>
int main()
{
    char s[30];
    int len=0,i;
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
       len=len+1;
    }printf("length is %d",len);
}
