#include<stdio.h>
int main()
{
    char s[30],t[40];
    int i,j,len=0,k;
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        len++;

    }len=len-1;
    for(j=0;0<=len;j++)
    {
     t[j]=s[len];len--;
    }printf("%s",t);
}
