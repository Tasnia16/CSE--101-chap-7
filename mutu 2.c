#include<stdio.h>
void f1(int a);
void f2(int b);
int main(void)
{
    f1(5);
}
void f1(int a)
{
    if(a)
    {
        f2(a);
        printf("%d ",a);
    }
}
void f2(int b)
{
    if(b)
    {   if(b!=1)
        printf("%d ",b);
        f1(b-1);
    }
}
