#include<stdio.h>
int main()
{
    int n,a,b,sum;
    scanf("%d",&n);
    a=n%10;
    while(n>=10)
    {
        n=n/10;
    }
    b=n;
    sum=a+b;
    printf("%d",sum);
}