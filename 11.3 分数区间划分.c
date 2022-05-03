#include <stdio.h>
int main()
{
float a;
printf("请输入分数:");
scanf("%d",&a);
if (a>=90&&a<=100) 
 {printf("%d----优秀",a);
   }
else if (a>=80&&a<90)
  {printf("%d----良好",a); 
    } 
else if (a>=70&&a<80)
   {printf("%d----中等",a);
	   }    
else if (a>=60&&a<70)
		{printf("%d----及格",a);
		}
else printf("不及格");
}
