#include<stdio.h>
int main()
{
    char s[30],t[30];
    int i;
    printf("enter the s string");
    gets(s);
    printf("enter the t string");
    gets(t);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==t[i])
            printf("both strings are lexographically equal");
        else
            printf("not");
    }
}
