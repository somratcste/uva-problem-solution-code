#include <stdio.h>
int main()
{
    int a[100],b[100],c,i,j,m[100]={0},p=0;
    scanf("%d\n",&c);
    for(i=0;i<c;i++)
    {
        scanf("%d%d",&a[i],&b[i]);

        for(j=a[i];j<=b[i];j++)
       {
       if(j%2==1){
         m[p]+=j;
        }
      }
    p++;
   }
   for(i=0;i<c;i++)
   {
       printf("Case %d: %d\n",i+1,m[i]);
   }
   return 0;
}
