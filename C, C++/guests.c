#include<stdio.h>
float getDiscount(int noOfGuests,float chargeperGuest);
float getAmount(int noOfGuests,float chargeperGuest,float discount);
int main()
{
	int noOfGuests;
	float chargeperGuest,amount,discount;
	printf("enter no.of guests = ");
	scanf("%d",&noOfGuests);
	printf("enter charge per guest = ");
	scanf("%f",&chargeperGuest);
	printf("discount is %.2f\n",getDiscount(noOfGuests,chargeperGuest));
	printf("amount is %.2f",getAmount(noOfGuests,chargeperGuest,discount));
}
float getDiscount(int noOfGuests,float chargeperGuest)
{
	float discount;
	if(noOfGuests>=200)
	   discount=noOfGuests*chargeperGuest*10/100;
	else
	   discount=0;
	return discount;      
}
float getAmount(int noOfGuests,float chargeperGuest,float discount)
{
	float amount;
	amount=(noOfGuests*chargeperGuest)-discount;
	return amount;
}
