#include<stdio.h>
double *avg(double x,double y,double z,double w);
int main(void)
{
  double *p;
  p=avg(10.5,4.6,9,6.98);
  printf("%lf",*p);
}
double *avg(double x,double y,double z,double w)
{
    double count;
    count=(x+y+z+w)/4;
    return &count;
}

