#include<stdio.h>
struct Employee
{
    int id;
    char name[50];
    float salary;
};
int main()
{
    struct Employee p1,p2,p3,highest;
    printf("input info for p1 id,name,salary");
    scanf("%d%s%f",&p1.id,&p1.name,&p1.salary);
    printf("\ninput info for p2 id,name,salary");
    scanf("%d%s%f",&p2.id,&p2.name,&p2.salary);
    printf("\ninput info for p3 id,name,salary");
    scanf("%d%s%f",&p3.id,&p3.name,&p3.salary);
    if(p1.salary>p2.salary&&p1.salary>p3.salary)
    highest=p1;
    else if(p2.salary>p1.salary&&p2.salary>p3.salary)
        highest=p2;
    else
        highest=p3;
    printf("\nhighest salary name %s id %d salary %f",highest.name,highest.id,highest.salary);





}
