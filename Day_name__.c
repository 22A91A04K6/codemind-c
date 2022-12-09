#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a==1)
    {
        printf("monday");
    }
    else if(a==2)
    {
        printf("tuesday");
    }
    else if(a==3)
    {
        printf("Wedensday");
    }
    else if(a==4)
    {
        printf("Thursday");
    }
    else if(a==5)
    {
        printf("Friday");
    }
    else if(a==6)
    {
        printf("Saturday");
    }
    else if(a==7)
    {
        printf("Sunday");
    }
    else
    {
        printf("invalid input");
    }
}