#include<stdio.h>
int main()
{
    char s[20],t[30];
    gets(s);
    int i,j,len=0;
    for(i=0;s[i]!='\0';i++)
    {
        len++;
    }
    len=len-1;
    for(j=0;0<=len;j++)
    {
        t[j]=s[len];
        len--;
    }
    printf("reversed string  %s",t);
}
