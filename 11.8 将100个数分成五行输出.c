#include <stdio.h>
int main()
{
int i=1,sum=0;
while(i<=100)
	{
		if (i%20==1)	//将100分成五行，每行二十个数  
		printf("\n");
		printf("%5d",i);
		i=i+1;
	}
} 
