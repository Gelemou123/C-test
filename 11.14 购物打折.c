#include <stdio.h>
int main()
{
	float x,y;
	printf("ÇëÊäÈë¹ºÎï¿î:\n");	
	scanf("%f",&x);
	if (x>=2400&&x<3200)
	{
		printf("ÄúÓ¦¸¶%f",x*0.9);
	}
	switch((int)x/1600)
	{ 	
		case 0:printf("ÄúÓ¦¸¶%f",x);break;
		case 1:printf("ÄúÓ¦¸¶%f",(float)x*0.95);break;
		case 2:printf("ÄúÓ¦¸¶%f",(float)x*0.85);break;
		default:printf("ÄúÓ¦¸¶%f",(float)x*0.8);  
	}
	
}
