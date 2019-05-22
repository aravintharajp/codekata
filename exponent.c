#include <stdio.h>

int main(void) {
	int n,k,a=1;
	scanf("%d%d",&n,&k);
	for(int i=1;i<=k;i++)
	a=a*n;
	printf("%d",a);
	return 0;
}
