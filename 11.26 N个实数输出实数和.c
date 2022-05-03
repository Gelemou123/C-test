#include <stdio.h>
#define N  10
int main()
{
	float m[N],x=0.0;
	int i;
	for (i=0;i<N+1;i++)
	scanf ("%f",&m[i]);
	for (i=1;i<N;i++)
	{
		x+=m[i-1];
		printf("%2d    %f",i,x);
	}
 } 
