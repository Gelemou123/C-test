#include <stdio.h>
int main()
{
float score;
printf("������ѧ���ĳɼ�:");
scanf("%f",&score);
switch ((int)score/10)
	{	
		case 10:case 9:printf("����");break;//���������ͬʱ������ʡ�� 
		case  8:printf("����");break;
		case  7:printf("�е�");break;
		case  6:printf("����");break;
		case  5:case  4:case  3:case  2:case  1:case  0:printf("������");break;
		default:printf("���벻�Ϸ�");
	}
return 0;
}     
