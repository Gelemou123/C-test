#include <stdio.h>	//头文件
int main()			//主函数 
{	system("color 02");
	printf("char类型所占字节数:  %d\n",sizeof(char));    	//sizeof()获得char类型所占字符数
	printf("short类型所占字节数: %d\n",sizeof(short)) ;   	//sizeof()获得short类型所占字符数
	printf("int类型所占字节数:   %d\n",sizeof(int));     	//sizeof()获得int类型所占字符数
	printf("long类型所占字节数:  %d\n",sizeof(long));        //sizeof()获得long类型所占字符数
	printf("float类型所占字节数: %d\n",sizeof(float));   	//sizeof()获得float类型所占字符数
	printf("double类型所占字节数:%d\n",sizeof(double));      //sizeof()获得double类型所占字符数
	getchar();
	return 0;
}
 
 
