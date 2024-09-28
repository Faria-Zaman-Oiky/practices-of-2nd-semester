#include<stdio.h>
int main()
{
    char s[30];
    printf("enter the sting ");
    gets(s);
    int i;
    for(i=0;s[i]!=0;i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            s[i]=s[i]-32;
        }
    }printf("uppercase string is %s",s);
    return 0;
}
