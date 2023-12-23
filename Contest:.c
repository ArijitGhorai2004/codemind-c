#include<stdio.h>
int main()
{
    int a,x,y;
    scanf("%d%d%d",&a,&x,&y);
    int b=(1*x)+(2*y);
    if(b>=a)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}