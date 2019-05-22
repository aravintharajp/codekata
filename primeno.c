#include <stdio.h>

int main(void) {
	int n,i,f=0;
	scanf("%d",&n);
if(n<2)
{
	exit(0);
}
else{
	 for(i = 2; i <= n/2; ++i)
    {
        if(n%i == 0)
        {
            f = 1;
            break;
        }
    }
        if (f == 0)
          printf("yes");
        else
          printf("no");
}

    return 0;
}
