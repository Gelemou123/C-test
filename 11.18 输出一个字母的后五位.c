#include <stdio.h>
int main()
{
	int i;
	char a;
		while (a!='#')
		{
		scanf("%c",&a);
		if (a>='A'&&a<='z')			//����һ����Χ��Ϊelse��׼�� 
		{		
			if (a>='A'&&a<='U')		//���������ַ���a-v֮�䣬�������λ�ַ� 
			{
				printf("%c",a+5);
			}		
			if (a>='W'&&a<='Z')		//���������ַ���W-Z֮�䣬���ǰ21���ַ� 
			{
				printf("%c",a-21);	
			}
		//��д 
				if (a>='a'&&a<='u')
				{
					printf("%c",a+5);
				}
				if (a>='w'&&a<='z')
				{
					printf("%c",a-21);	
				}
		//Сд 
		}
	else printf("%c",a);
	 	}	
}

