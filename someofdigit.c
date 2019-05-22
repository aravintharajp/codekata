#include <stdio.h>

int main(void) {
	int n,k,m[25],y=0;
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++)
	scanf("%d",&m[i]);
	
	for(int i=0;i<k;i++)
	y+=m[i];
	
	printf("%d",y);
	return 0;
}
