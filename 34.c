#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char ch[500];
    int i,n,count=1;
    gets(ch);
    n=strlen(ch);
    for(i=0;i<n;i++)
        {
    if(ch[i]== '.')
         {
            count++;
        }
    }
    printf("%d",count);
}
