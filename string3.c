#include<stdio.h>
int main()
{
    char s[40];
    int i;
    gets(s);
    for(i=0;s[i]!='\0';i++)
    printf("%c\n",s[i]);
    return 0;
}
