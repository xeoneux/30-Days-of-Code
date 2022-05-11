#include <stdio.h>
struct person
{
    int age;
};
int person(int age);
int yearPasses(int age);
void amIOld(int age);

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {   struct person a;
        int age;
        scanf("%d",&age);
        printf("%d\n",age);
        a.age=person(age);
        amIOld(a.age);
        a.age=yearPasses(a.age);
        a.age=yearPasses(a.age);
        a.age=yearPasses(a.age);
        amIOld(a.age);
        printf("\n");
    }
    return 0;
}

int person(int age)
{   int aage;
    if(age<0)
    {
        printf("Age isn't valid, setting to zero.\n");
        aage=0;
    }
    else
    {
        aage=age;   
    }
    return aage;
}
int yearPasses(int age)
{
    age++;
    return age;
}
void amIOld(int age)
{
    if(age <13)
    {
        printf("you are young.\n");
    }
    else if(age <18)
    {
        printf("you are a teenager.\n");
    }
    else
    {
        printf("you are an old.\n");
    }
}