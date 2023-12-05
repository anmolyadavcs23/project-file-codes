#include<stdio.h>
int main()
  
  {
  	int i,size;
  	printf("enter size");
  	scanf("%d",size);
  	int a[size];
  	for( i=0;i<=size;i++)
  	{
  		printf("enter the element at %dth index:- ",i);
  		scanf("%d",&a[i]);
	  }
	  int pos,element;
	  printf("enter position: ");
	  scanf("%d",&pos);
	  printf("enter element: ");
	  scanf("%d",&element);
	  for(i=0;i>=pos;i--)
	  {a[i]=a[i-1];
	  }
	  a[pos]=element;
	  n++;
	  
	  
  	
  }
