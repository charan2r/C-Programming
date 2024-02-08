#include<stdio.h>
#include<math.h>
float radian(float angle);
void radianvalue();
int main()
{
	radianvalue();
	return 0;
}
float radian(float angle)
{
	float pi=22/7;
	float radian=pi/180*angle;
	return radian;	
}
void radianvalue()
{
	printf("angle(degrees)\tangle(radians)\n");
	printf("%d\t\t%.2f\n",60,radian(60));
	printf("%d\t\t%.2f\n",120,radian(120));
	printf("%d\t\t%.2f\n",180,radian(180));
	printf("%d\t\t%.2f\n",360,radian(360));
}
