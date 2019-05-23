#include <stdio.h>
int main()
{
    int n, temp, r, result = 0;
    scanf("%d", &n);
    temp = n;
    while (temp != 0)
    {
        r = temp%10;
        result += r*r*r;
        temp /= 10;
    }

    if(result == n)
        printf("yes");
    else
        printf("no");

    return 0;
}
