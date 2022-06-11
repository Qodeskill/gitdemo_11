#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)	//row
	{
		for(j=1;j<=5;j++)	//col
		{
			printf("\t%d",i);
		}
		printf("\n");
	}
}
/*
i=1 	i<=4	j=1	j<=3			j++
1	1<=4	1	1<=3		***	2
			2<=3	 	***	3
			3<=3			4
			4<=3

2	2<=4	1	1<=3			2
			2<=3	 		3
			3<=3			4
			4<=3


*/