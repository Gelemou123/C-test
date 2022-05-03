#include <stdio.h>
#include <string.h>
/*void func(char ch)
{	
	if (ch>='a'&&ch<='z')
	{
		ch=ch-32;
		printf("%c",ch); 
	}
	if (ch>='A'&&ch<='Z')
	{
		ch=ch+32;
		printf("%c",ch); 
	}
	else printf("%c",ch);
}

int main()
{
	char ch;
	scanf("%s",&ch);
	func(ch);
}*/
	
	
/*	char func(char ch)
	{
		if (ch>='a'&&ch<='z')
			{
				ch=ch-32;
			}
			else if (ch>='A'&&ch<='Z')
			{
				ch=ch+32;
			}
		return ch;
	}
	int main()
	{
		int i;
		char a[20];
		scanf("%s",&a);
		for (i=0;i<=strlen(a);i++)
		{
			a[i]=func(a[i]);
			printf("%c",a[i]);
		}   
	}*/
	
	
	
	void exchange(char a[])
	{
		int i;
		for (i=0;i<strlen(a);i++)
		{
			if (a[i]>'a'&&a[i]<'z')
			{
				printf("%c",a[i]);
			}
			else if (a[i]>'A'&&a[i]<'Z')
			{
				printf("%c",a[i]);
			}
		}
	}
	
	int main()
	{
		int i;
		char a[20];
		scanf("%s",&a);
		exchange(a);	
	}	
	
	
	
	
	
  
