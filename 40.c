#include <stdio.h>

int main(void) {
	int n,f1=1,f2=1,f3,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d ",f1);
		f3=f1+f2;
		f1=f2;
		f2=f3;
	
	}
	return 0;
}
