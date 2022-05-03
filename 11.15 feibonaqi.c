#include <stdio.h>
int main()
{
	int i,ai=1,aj=1,an;
	printf("%10d %10d",ai,aj);
	for (i=3;i<=30;i++)
	{
		an=ai+aj;
		ai=aj;
		aj=an;
		printf("%10d",an);
		if (i%6==0)
		{
			printf("\n");
		}
	}
	
}
