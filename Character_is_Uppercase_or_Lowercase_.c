#include<stdio.h>
int main()
{
    char le;
    scanf("%c",&le);
    if(le>='A' && le<='Z')
    {
        printf("uppercase alphabet");
    }
    else if(le>='a' && le<='z')
    {
        printf("lowercase alphabet");
    }
    else
    {
        printf("not an alphabet");
    }
}