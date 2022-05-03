#include <stdio.h>
int main()
{system("color 02");
float F;
printf("请输入华氏温度:");
scanf("%f",&F);
float C=(F-32)*5/9;
printf("转换后的摄氏温度是:%.2f",C);//%.2f保留小数点后两位 
}

