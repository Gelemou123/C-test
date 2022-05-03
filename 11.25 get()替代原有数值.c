#include <stdio.h>
#include <string.h>
int main()
{
	char ss[10] = "12345";
	gets(ss);				//»áÌæ´ú12345 
	strcat(ss,"6789");
	printf("%s\n",ss);
	
}
