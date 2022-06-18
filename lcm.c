#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int a,b,low,lcm,temp;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a<b)
    {
        low=a;
    }
    else
    {
        low=b;
    }
    while(1)
    {
        if(low%a==0 && low%b==0)
        {
            lcm=low;
            break;
        }
        else
        {
        low++;
    }
    }
printf("%d",lcm);
    return 0;
}

