#include<stdio.h>
int main()
{
    int n1,n2,result,choice;
    printf("Enter first number 'n1' and second number 'n2' : ");
    scanf("%d%d",&n1,&n2);
    printf("Press 1.for Addition\n2.for Subtraction\n3.for Multiplication\n4.for Division\n");
	scanf("%d",&choice);
	if (choice==1)
	{
		result=n1+n2;
		printf("You have selected Addition!\n");
		printf("%d+%d=%d",n1,n2,result);
	}
	else if(choice==2)
	{
		result=n1-n2;
		printf("You have selected Subtraction!\n");
		printf("%d-%d=%d",n1,n2,result);
	}
	else if (choice==3)
	{
		result=n1*n2;
		printf("You have selected Multiplication!\n");
		printf("%d*%d=%d",n1,n2,result);
	}
	else if(choice==4)
	{
		result=n1/n2;
		printf("You have selected Division!\n");
		printf("%d/%d=%d",n1,n2,result);
	}
	else
	{
		printf("You pressed an invlaid input!\n\tTry again:(");
	}
}

