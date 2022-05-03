#include <stdio.h>
int main()
{
	char x;
	printf("请输入成绩等级:\n");
	scanf("%c",&x);
	switch (x)
	{
	case 'A':printf("85-100");break;
	case 'B':printf("75-84");break; 
	case 'C':printf("60-74");break; 
	case 'D':printf("0-59");break;  
	 }
 	
 } 
 
