#include<stdio.h>
int main()

{
    char s[30],t[30];
    int i;
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        t[i]=s[i];printf("  %c",t[i]);

    }
    for(i=0;t[i]!='\0';i++)
    {
        printf("  %c",t[i]);

    }

}
