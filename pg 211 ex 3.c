#include<stdio.h>
char display(char *p);
int main(void)
{
    display("This is a string");
}
char display(char *p)
{
    if(*p)
    {
        printf("%c",*p);
        display(p+1);
    }
}
