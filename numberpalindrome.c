#include <stdio.h>

int main(void) {
	int n,n1,r,sum=0;
	scanf("%d",&n);

	n1=n;
	while(n>0)
	{    
		r=n%10;    
		sum=(sum*10)+r;    
		n=n/10;    
	}   	
if (n1==sum)
printf("yes");
else
printf("no");
    
	return 0;
}
