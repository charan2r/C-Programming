#include<stdio.h>
#define SIZE 10
void histogram(int val);
int main()
{
	int a[SIZE];
	int i;
	for(i=0;i<SIZE;++i)
	   printf("enter values = ");
	   scanf("%d",&a[i]);
	
	for(i=0;i<SIZE;++i)
	   printf("\n%d%d",i,a[i]);
	   histogram(a[i]);
	return 0;
	      
}
void histogram(int val)
{
	int x;
	for(x=1;x<=val;++x)
	  printf("*");
}
