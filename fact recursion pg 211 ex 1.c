#include<stdio.h>
int fact(int n);
int p=1;
int main(void)
{
    int n,k;
    scanf("%d",&n);
    k=fact(n);
    printf("%d",k);
}
int fact(int n)
{
    if(n)
    {
        p=p*n;
        fact(n-1);
    }
    return p;
}
