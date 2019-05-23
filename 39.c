#include<stdio.h>
int main()
{
int n,a[10];
for(int i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
n=a[0];
 for(int i=0;i<10;i++)
 {
if(n<a[i])
{
n=a[i];
}
}
printf("%d",n);
return 0;
}
