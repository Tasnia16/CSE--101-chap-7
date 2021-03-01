#include<stdio.h>
void a(void);
void b(void);
void c(void);
void d(void);

int main(void)
{
    printf("I ");
    a();
    printf("much.");
}
void a(void)
{
    b();
    printf(" very ");
}
void b(void)
{
    c();
    printf(" country");
}
void c(void)
{
    d();
    printf(" my");
}
void d(void)
{
    printf(" love");
}
