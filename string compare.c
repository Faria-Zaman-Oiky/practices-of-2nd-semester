#include<stdio.h>
int main()
{char s[10],t[10];
gets(s);
gets(t);
int cmp=0,i;
for(i=0;s[i]!='\0'&&t[i]!='\0';i++)
{
    if(s[i]!=t[i])
    {


        cmp=1;
        break;
    }
}
if(cmp==1)
{
    printf("not equal");
}
else
    printf("equal");

}

