#include<stdio.h>
int main()
{
    char s[30],t[20];
    int i,len=0;
    gets(s);
    gets(t);
    for(i=0;s[i]!='\0';i++)
    {
        len++;
    }
    for(int j=0;t[j]!='\0';j++)
    {
        s[len+j]=t[j];
    }printf("%s",s);
}
