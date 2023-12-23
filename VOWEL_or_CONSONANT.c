#include<stdio.h>
int main()
{
    char ch;
    int a,b;
    scanf("%c",&ch);
    a=(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
    b=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
    if(a||b)
    {
        printf("VOWEL");
    }
    else
    {
        printf("CONSONANT");
    }
}