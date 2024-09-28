#include<stdio.h>
int main()
{
    char s[30];gets(s);
    int i;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
    }printf("lower case string is %s",s);
}
