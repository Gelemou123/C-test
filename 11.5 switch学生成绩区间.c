#include <stdio.h>
int main()
{
float score;
printf("请输入学生的成绩:");
scanf("%f",&score);
switch ((int)score/10)
	{	
		case 10:case 9:printf("优秀");break;//两个输出相同时，可以省略 
		case  8:printf("良好");break;
		case  7:printf("中等");break;
		case  6:printf("及格");break;
		case  5:case  4:case  3:case  2:case  1:case  0:printf("不及格");break;
		default:printf("输入不合法");
	}
return 0;
}     
