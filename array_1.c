//homogeneous data
#include<stdio.h>
int main()
{
	int a[5],i;
	for(i=0;i<5;i++)		//insert
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)		//print
	{
		printf("\na[%d] : %d",i,a[i]);
	}
}
/*
a[0] : 12
a[1] : 34
a[2] : 54
a[3] : 65
a[4] : 77
  ^
   index 
   start from 0.	
	
*/