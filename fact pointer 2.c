#include<stdio.h>
int *fact(int *p);
int k=1,i;
int main(void)
{
    int n,*j;
    scanf("%d",&n);
    j=fact(&n);
    printf("%d",*j);
}
int *fact(int *p)
{
    for(i=1;i<=*p;i++)
        k=k*i;
    return &k;
}
