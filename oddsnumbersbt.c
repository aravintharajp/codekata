#include <stdio.h>

int main(void) {
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=a+1;i<b;i++)
	{
		if(i%2==1)
		printf("%d\t",i);
	}
	return 0;
}
