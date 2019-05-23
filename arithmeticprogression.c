#include <stdio.h>

int main()
{
    int a,b,c,d;
    scanf("%d%d%d",&b,&a,&c);
    if(b>=1&&d<=10000)
    {
       s=(b*(2*a+(b-1)*c))/2; 
       printf("%d",d);
    }
    else
    printf("invalid");
    return 0;
}
