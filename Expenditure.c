#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int a=30*y;
    if(a<=x)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}