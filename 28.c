#include <stdio.h>

int main(void) {
int n,m[100];
scanf("%d",&n);
for(int i=0;i<n;i++)
{
	scanf("%d",&m[i]);
}
for (int i=0;i<n;i++)
{
	printf("%d %d\n",m[i] ,i);
}
	return 0;
}
