#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[])
{
    int i;
    if(argc!=3)
    {
        printf("Not exist\n");
        exit(1);
    }
    i=strcmp(argv[1],argv[2]);
    if(i<0)
        printf("%s is greater than %s",argv[2],argv[1]);
    else if(i>0)
        printf("%s is greater than %s",argv[1],argv[2]);
    else
        printf("Both are same");
}
