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
    int i;
    for(i=1;i<=n;i++)
        p=p*i;
    return p;
}

