#include <stdio.h>
int main()
{
float a;
printf("���������:");
scanf("%d",&a);
if (a>=90&&a<=100) 
 {printf("%d----����",a);
   }
else if (a>=80&&a<90)
  {printf("%d----����",a); 
    } 
else if (a>=70&&a<80)
   {printf("%d----�е�",a);
	   }    
else if (a>=60&&a<70)
		{printf("%d----����",a);
		}
else printf("������");
}
