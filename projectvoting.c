// wap to check zender,if male ,before name print mr,else female print mrs.then print name ,check age if less than 18 (not valid)else can vote.take vote on certain party

#include<stdio.h>
int main()
 {
int name,gender, male,age,party;
 	printf("gender:- ");
 	scanf("%d",gender);
 	printf(" Name:- ");
 	scanf("%d",name);
 
	 	
 if(gender==male)
 {
 	printf("Mr.%d\n",name);
 	
}
else {
	printf("Ms.%d\n",name);
	
}



printf("age:- \n");
scanf("%d",&age);
{
	if(age<18)
	{
		printf("not valid\n");
	
	}else{
		printf("can vote\n");
	}
	print("enter the party:- \n");
	scanf("%d",party);
	printf("you voted the %d",party);
}
 return 0;
}
