#include<stdio.h>
int main()
{system("color 02");
char ch;						//定义字符型常量ch
printf("请输入一个小写字母:");
scanf("%c",&ch);						
ch=ch-32;					
printf("转换后的字母是:%c",ch); 
}

