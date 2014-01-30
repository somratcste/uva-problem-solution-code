#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,i,p,m;
    while(scanf("%d%d",&a,&b)==2)
    {
        if(a+b==0)
        break;
        p=0;
        for(i=a;i<=b;i++)
        {
           m=sqrt(i);
           if(m*m==i)
           p++;
        }
        printf("%d\n",p);
    }
    return 0;
}
