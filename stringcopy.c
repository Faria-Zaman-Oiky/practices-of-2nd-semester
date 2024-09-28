#include<stdio.h>
int main()
{
    char s[30],t[30];
    printf("enter the string s");
    gets(s);
    int i;
    for(i=0;s[i]!='\0';i++)
        t[i]=s[i];t[i]='\0';//to ensure the the string is end with a null character
    printf("t is %s",t);
    printf("\n total characters copied %d",i);
    return 0;
}
