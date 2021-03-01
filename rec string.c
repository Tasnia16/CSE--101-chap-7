#include<stdio.h>
char recurse(int i);
int main()
{
    recurse(1);
}
char recurse(int i)
{
    if(i==1)
    {
     printf("I ");
     recurse(i+1);
    }
    if(i==2)
    {
     printf("love ");
     recurse(i+1);
    }
    if(i==3)
    {
     printf("my ");
     recurse(i+1);
    }
    if(i==4)
    {
        printf("country");
    }
}
