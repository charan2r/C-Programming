#include<stdio.h>
int main()
{
	int marks[3][3];
	int i,j,avg;
	double sum[3]={0};
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			printf("enter student %d marks %d = ",i+1,j+1);
			scanf("%d",&marks[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			sum[i]+=marks[i][j];
		}
	}
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			 avg=sum[i]/3;
		}
	}
	for(i=0;i<3;++i)
	{
		printf("average of student %d is %d \n",i+1,avg);
	}
	return 0;
}
