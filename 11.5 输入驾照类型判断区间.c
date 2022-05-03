#include <stdio.h>
int main()
{
char ctype;
printf("请输入驾照类型");
scanf("%c",&ctype);
if (ctype=='A') {
	printf("可驾驶大客车，货车和小轿车"); 
				}
				else if (ctype=='B')
				{
					printf("可驾驶货车和小轿车");
				}
				else if (ctype=='C')
				{
					printf("可驾驶小轿车");
				}
				else if (ctype=='D')
				{
					printf("可驾驶摩托车"); 
				}
else 
	printf("输入错误"); 
} 
