#include <stdio.h>
int main()
{
char ctype;
printf("请输入驾照类型:");
ctype=getchar(); 
if (ctype>='a'&&ctype<='z')
ctype=ctype-32;
switch (ctype)
	{case 'A':printf("可驾驶大客车货车和小轿车");break;
	 case 'B':printf("可驾驶货车和小轿车");break;
	 case 'C':printf("可驾驶小轿车");break;
	 case 'D':printf("可驾驶摩托车");break;
	 default:printf("格式错误");
	}
return 0;
}
