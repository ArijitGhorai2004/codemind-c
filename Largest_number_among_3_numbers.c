#include<stdio.h>
int main()
{
    double Num1,Num2,Num3;
    scanf("%lf%lf%lf",&Num1,&Num2,&Num3);
    if(Num1>=Num2&&Num1>=Num3)
    printf("%.f",Num1);
    if(Num2>=Num1&&Num2>=Num3)
    printf("%.f",Num2);
    if(Num3>=Num1&&Num3>=Num2)
    printf("%.f",Num3);
    return 0;
}