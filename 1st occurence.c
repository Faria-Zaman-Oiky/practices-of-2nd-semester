
#include<stdio.h>
int main()
{
    char s[10],tofind;
    gets(s);
    scanf("%c",&tofind);
    int i,cmp=0;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==tofind)
        {
            cmp=1;
            break;
        }

    }
    if(cmp==1)
        printf("%d",i);
}
