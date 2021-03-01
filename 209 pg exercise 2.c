#include<stdio.h>
void copy(char *to,char *from);
int main()
{
    char a[100],b[100];
    gets(a);
    copy(b,a);
    printf(b);
}
void copy(char *to,char *from)
{
    if(*from)
    {
        *to++=*from++;
         copy(to,from);
    }
    else
        *to='\0';
}
