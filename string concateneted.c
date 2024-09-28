#include<stdio.h>
int main()
{
    char s[10],t[10];
    printf("enter s");
    gets(s);
    printf("enter t");
    gets(t);int i,len=0;
    for(i=0;s[i]!='\0';i++)
    {
        len++;

    }int j;
    for(j=0;t[j]!='\0';j++)
    {
        s[len]=t[j];
        len++;
    }printf(" concatenated %s",s);
}
