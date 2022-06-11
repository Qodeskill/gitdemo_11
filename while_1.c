#include<stdio.h>
int main()
{	
	int i=1;
//	while(1)
	for(;;)
	{
		if(i<=26)
			printf("\n%c -  %c",i+++64,i+64+32);
		else
			break;
	}
}