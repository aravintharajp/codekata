#include <stdio.h>

int main()
{
   int min,hr,mn;
   scanf("%d",&min);
   if(min>0)
   {
       hr=min/60;
       mn=min-(hr*60);
       printf("%d %d",hr,mn);
   }
   return 0;
}
