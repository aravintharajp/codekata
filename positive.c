#include <stdio.h>

int main(void) {
	int a;
	scanf("%d",&a);
	if(a<0)
	{
		printf("negative");
	}
	else if(a>0)
	{
		printf("positive");
	}
	else if(a==0)
	{
		printf("zero");
	}
	else
	{
		printf("invalid input");	
	}
	return 0;
}
