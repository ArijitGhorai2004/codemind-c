#include<stdio.h>
int main()
{
    int A,B,i=1;
    scanf("%d%d",&A,&B);
    while(i<=B){
        printf("%d x %d = %d
",A,i,i*A);
        i++;
    }
}