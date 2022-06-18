#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int bin2dec(int num)
{
    int dec,ld,i=1;
    while(num!=0)
    {
        ld=num%10;
        num=num/10;
        dec=dec+(ld*pow(2,i));
        i++;
    }
    return dec;
}
int main()
{
int bin,oct=0,temp,i=1,ld,val;    
scanf("%d",&bin);
while(bin!=0)
{
    ld=bin%1000;
    val=bin2dec(ld);
    oct=oct+(val*i);
    i=i*10;
    bin=bin/1000;
}
printf("%d",oct);
    return 0;
}

