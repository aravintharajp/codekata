#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s1[100];
int c=0,i=0;

gets(s1);
while(s1[i]!='\0')
{
    if(s1[i]==' ')
    
        i++;
        c++;
        i++;
    }
    printf("%d ",c);
    return 0;
}
