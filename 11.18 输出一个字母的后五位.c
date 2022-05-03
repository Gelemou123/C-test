#include <stdio.h>
int main()
{
	int i;
	char a;
		while (a!='#')
		{
		scanf("%c",&a);
		if (a>='A'&&a<='z')			//定义一个大范围，为else做准备 
		{		
			if (a>='A'&&a<='U')		//如果输入的字符在a-v之间，输出后五位字符 
			{
				printf("%c",a+5);
			}		
			if (a>='W'&&a<='Z')		//如果输入的字符在W-Z之间，输出前21个字符 
			{
				printf("%c",a-21);	
			}
		//大写 
				if (a>='a'&&a<='u')
				{
					printf("%c",a+5);
				}
				if (a>='w'&&a<='z')
				{
					printf("%c",a-21);	
				}
		//小写 
		}
	else printf("%c",a);
	 	}	
}

