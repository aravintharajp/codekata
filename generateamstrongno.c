#include<stdio.h>

void main()
{

	int num1, num2, i, n, rem, temp, count=0;
	
	scanf("%d%d",&num1,&num2);
	
	for(i=num1+1; i<num2; i++)
	{
		temp=i;
		n=0;
		while(temp!=0)
		{
			rem=temp%10;
			n = n + rem*rem*rem;
			temp=temp/10;
		}
		if(i==n)
		{
			
			printf("%d  ",i);
			count++;
		}
	}
	if(count==0)
	{
		printf("Invalid");
	}

}
