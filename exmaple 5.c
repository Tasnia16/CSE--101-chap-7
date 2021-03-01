#include<stdio.h>
int *init(int x);
int count;
int main(void)
{
    int *p;
    p=init(101);
    printf("count(through o)is %d",*p);
}
int *init(int x)
{
    count=x;
    return &count;
}
