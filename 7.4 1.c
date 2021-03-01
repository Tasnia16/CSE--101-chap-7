#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{//system("COLOR 0A");

    int i;
    if(argc!=3)
        {printf("Specify");
        exit(1);}
    i=strcmp(argv[1],argv[2]);
    if(i<0)
    {
        printf("%s is greater then %s",argv[2],argv[2]);
    }

}

