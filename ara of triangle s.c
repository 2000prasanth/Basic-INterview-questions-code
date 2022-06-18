#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    double a,b,c,s,area,temp,x,y,z;
    scanf("%lf %lf %lf",&a,&b,&c);
    s=((a+b+c)/2);
    x=s-a;
    y=s-b;
    z=s-c;
    temp=s*x*y*z;
    area=sqrt(temp);
printf("area os %0.3lf",area);
    return 0;
}

