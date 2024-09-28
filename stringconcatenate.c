#include<stdio.h>
int main()
{
    char s[30],t[30];
    printf("enter   the first string s ");
    gets(s);
    printf("\n enter  the second string t ");
    gets(t);
    int i,len=0,j;
    for(i=0;s[i]!='\0';i++)
    {
        len++;

    }
    for(j=0;t[j]!='\0';j++)
    {
        s[len+j]=t[j];

    }s[len+j]='\0';
    printf("%s",s);

}
