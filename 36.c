#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 int main()
{
    char s[15000];
    int i=0,count=0;
    gets(s);
    while(s[i]!='\0')
    {
        if((s[i]>=33&&s[i]<=47)||(s[i]>=58&&s[i]<=64)||(s[i]>=91&&s[i]<96)||(s[i]>=123&&s[i]<=126))
    count++;
    i++;
    }
  
    printf("%d",count);

	return 0;
}
