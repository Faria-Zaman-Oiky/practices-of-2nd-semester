#include<stdio.h>
int main()
{
    char s[30];
    printf("enter the string : ");
    gets(s);
    int i;
    for(i=0;s[i]!='\0';i++)
    {
     printf("%c\n",s[i]);
    }
}
