#include<stdio.h>
int main()
{
    int a,b,c,i,d;
    scanf("%d%d%d",&a,&b,&c);
    for(i=b;i<=c;i++)
    {
      d=a*i;
      printf("%d x %d = %d
",a,i,d);
    }
        
}