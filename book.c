#include<stdio.h>
int fact(int n);
int main(void)
{
    int n;
    scanf("%d",&n);
    printf("%d",fact(n));
}
int fact(int n)
{
    while(n!=1)
        return n*fact(n-1);
}
