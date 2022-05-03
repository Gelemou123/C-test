#include <stdio.h>
int main()
{
	int i=1,j=1;
	float sum=0;
	while (1.0/i>1e-6)
	{
		sum+=(1.0/i)*j;
		i+=2;
		j=-j;
	}
	sum*=4;
	printf("%f",sum);
}
