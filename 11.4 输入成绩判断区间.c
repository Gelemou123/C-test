#include <stdio.h>
int main()
{
float score;
printf("请输入学生的成绩:");
scanf("%f",&score);
if (score>=0&&score<=100){	//确定成绩的范围，超过这个范围不合法 
	if (score>=90)		//使用if语句的嵌套，如果score大于等于90，输出优秀 
	{printf("优秀");		 
	} 
	 else if  (score>=80&&score<90)//如果成绩大于等于80并且小于90，输出良好 
	{printf("良好");
	}
	 else if (score>=70&&score<80)
	 {printf("中等");
	 }
	 else if (score>=60&&score<70)
	 {printf("及格");
	 }								//用三个else if 语句确定score的范围 
	 else printf("不及格");} 		//if嵌套的结束，与上面第二个if对应 
else printf("不合法"); 	  			
return 0; 
}     
