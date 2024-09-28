#include<stdio.h>
int main()
{
    struct person
    {
        int age;
        float salary;

    };
    struct person person[4];
    int i;
    for(i=0;i<4;i++)
    {
        printf("enter the information of person %d",i+1);
        printf("\n age: ");
        scanf("%d",&person[i].age);
        printf("\n salary: ");
        scanf("%f",&person[i].salary);

    }
    for(i=0;i<4;i++)
    {
        printf("\ninformation of person %d",i+1);
        printf("\nage %d ",person[i].age);
        printf("\n salary %f",person[i].salary);



    }

}
