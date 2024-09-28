#include<stdio.h>
int main()
{
    char s[10],t[10];
    gets(s);
    int i=0;
     for(i;s[i]!='\0';i++)
     {
         t[i]=s[i];
     }printf("second string is  %s",t);
}
