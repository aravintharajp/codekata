#include <stdio.h>

int main()
{
    int a,n,d,s;
    scanf("%d%d%d",&n,&a,&d);
    if(n>=1&&d<=10000)
    {
       s=(n*(2*a+(n-1)*d))/2; 
       printf("%d",s);
    }
    else
    printf("invalid");
    return 0;
}
