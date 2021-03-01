#include<stdio.h>
void promt(char *p,int *n);
int main(void)
{
    int num;
    promt("This is a string",&num);
    printf("%d",num);
}
void promt(char *p,int *n)
{
    printf(p);
    scanf("%d",n);
}
