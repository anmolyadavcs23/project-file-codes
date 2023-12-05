#include<stdio.h>
int main()
{
	int i,j,side;
	printf("enter the side length of square");
	scanf("%d",&side);
	
	for(int i=1;i<=side;i++)
	{
		for(int j=1;j<=side;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
