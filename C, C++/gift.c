#include<stdio.h>
#include<assert.h>
float caldiscount(int time,int totamount);
void testcaldiscount(int time,int totamount);
void displaygift(float finaltot);
int main()
{
	int time,totamount,discount;
	float finaltot;
	printf("enter time = ");
	scanf("%d",&time);
	printf("enter total amount = ");
	scanf("%d",&totamount);
	discount=caldiscount(time,totamount);
	finaltot=totamount-discount;
	printf("total amount is %.2f",finaltot);
}
float caldiscount(int time,int totamount)
{
	float discount;
	if(time=16&&totamount>=5000)
	{
		return discount=totamount*0.1;
	}
	else if(time==16&&5000>totamount>=2500)
	{
		return discount=totamount*0.07;
	}
	else if(time==20&&totamount>=5000)
	{
		return discount=totamount*0.12;
	}
	else if(time==20&&5000>totamount>=2500)
	{
		return discount=totamount*0.9;
	}
}
void testcaldiscount(int time,int totamount)
{
	assert(testcaldiscount(16,5000)==500);
	assert(testcaldiscount(20,2500)==2250);
}
void displaygift(float finaltot)
{
	if(finaltot>=7000)
	{
		return ("gift");
	}
	if(7000>finaltot>=5000)
	{
		return ("gift");
	}
	if(5000>finaltot>=3000)
	{
		return ("gift");
	}
}
