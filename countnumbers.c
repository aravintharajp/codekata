#include <stdio.h>
int main()
{
    int a,b,cnt;
 
    scanf("%d",&a);
 
    cnt=0;
    b=a;
 
    while(b>0){
        cnt++;
        b/=10;
    }
 
    printf("%d",cnt);
     
    return 0;
}
