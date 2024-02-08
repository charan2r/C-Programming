#include<stdio.h>
int main()
{
	int width,length,base,height,radius;
	float area;
	char s;
	printf("enter the character of shape(R,T,C):");
	scanf("%c",&s);
	if(s=='R')
	{
		printf("enter width:");
		scanf("%d",&width);
		printf("enter length:");
		scanf("%d",&length);
		area=width*length;
		printf("Area is %.1f\n",area);
	}
	else if(s=='T')
	{
		printf("enter base:");
		scanf("%d",&base);
		printf("enter height:");
		scanf("%d",&height);
		area=base*height/2;
		printf("Area is %.1f\n",area);
	}
	else if(s=='C')
	{
		printf("enter radius:");
		scanf("%d",&radius);
		area=22/7*radius*radius;
		printf("Area is %.1f\n",area);
	}
	else
	    printf("Invalid");
	return 0;    
}
