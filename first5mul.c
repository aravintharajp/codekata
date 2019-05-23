#include <stdio.h>

int main(void) {
	int n,m=0;
	scanf("%d",&n);
	if(n!=0){
	for (int i=1;i<=5;i++)
	{
		m=n*i;
		printf("%d ",m);
	}
	}
	else
	printf("Invalid");
	return 0;
}
