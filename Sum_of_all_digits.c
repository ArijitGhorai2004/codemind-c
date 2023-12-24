#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    while(n>0)
    {
        int r=n%10;
        n=n/10;
        sum=sum+r;
    }
    printf("%d",sum);
}