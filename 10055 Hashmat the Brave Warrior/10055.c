#include <stdio.h>
int main()
{
    long long a,b,m;
    while(scanf("%lld%lld",&a,&b)==2)
    {
       m=a-b;
       if(m<0)
       m=m*-1;
       printf("%lld\n",m);
    }
    return 0;
}
