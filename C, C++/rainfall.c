#include<stdio.h>
int main()
{
	int month[11];
	int i,max,min;
	for(i=0;i<=11;++i){
	
	    printf("enter %d month average = ",i+1);
	    scanf("%d",&month[i]);
	    
	}
	
	for(i=0;i<=11;++i){
		if(max<month[i]){
		   max=month[i];}
		else (min>month[i]);{
		   min=month[i];
		   }		   		        
	}
	for(i=0;i<11;++i)
	{
		if(max==month[i])
		   printf("month with maximun rainfall is %d \n",i+1);
		if(min==month[i])  
		   printf("month with minimum rainfall is %d ",i+1); 
	}
	
	return 0;
	    
}
