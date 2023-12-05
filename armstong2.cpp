#include<stdio.h>

int main()
{

int n;

printf("Enter number");
scanf("%d,&n");
int original=n,r,sum=0;

while(n>0);
{
	int fact=1;
	r=n%10;
	for(int i=1;i<=r;i++)
	{
		fact=fact*i;
	}
	sum+=fact;
	n=n/10;
}
if(original==sum)
{
	printf("strong");
	
}
else
{
	printf("not strong");
}
}
