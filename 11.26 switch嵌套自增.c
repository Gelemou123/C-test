#include <stdio.h>
int main()
{
	int x=1,y=1,m=10,n=10;
	switch (x)
	{
		case 1:
			switch (y)
			{
				case 1:
				case 2:m++;break;
			}
		case 2:m++;n++;break; 
	}
	printf("m=%d,n=%d\n",m,n);
}
