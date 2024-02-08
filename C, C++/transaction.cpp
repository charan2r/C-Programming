#include<stdio.h>
int main()
{
	char x;
	int b;
	int n;
	printf("enter the transaction type...\n w(withdrawal) or d(deposit)");
	x=getchar();
	if(x=='w')
	{
		printf("you have selected withdrawal\n");
		printf("enter the bank balance :\n");
		scanf("%d",&b);
		printf("enter amount :\n");
		scanf("%d",&n);
		b=b-n;
		printf("withdrawal bank balnce is:\n");
		printf("%d",b);
	}
	else if(x=='d')
	{
		printf("you have selected deposit\n");
		printf("enter bank balance :\n");
		scanf("%d",&b);
		printf("enter amount :\n");
		scanf("%d",&n);
		b=b+n;
		printf("deposited bank balance is\n");
		printf("%d",b);
	}
	else
	printf("invalid");
	return 0;
}
