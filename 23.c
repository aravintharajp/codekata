#include<stdio.h>
int main()
{
    int n,m[n],i,temp=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&m[i]);
    }
   temp=m[0];
   for(i=1;i<n;i++)
   {
    if(temp>m[i])
    {
        temp=m[i];
    }
   }
    printf("%d ",temp);
return 0;
}
