#include <stdio.h>
int main()
{
float score;
printf("������ѧ���ĳɼ�:");
scanf("%f",&score);
if (score>=0&&score<=100){	//ȷ���ɼ��ķ�Χ�����������Χ���Ϸ� 
	if (score>=90)		//ʹ��if����Ƕ�ף����score���ڵ���90��������� 
	{printf("����");		 
	} 
	 else if  (score>=80&&score<90)//����ɼ����ڵ���80����С��90��������� 
	{printf("����");
	}
	 else if (score>=70&&score<80)
	 {printf("�е�");
	 }
	 else if (score>=60&&score<70)
	 {printf("����");
	 }								//������else if ���ȷ��score�ķ�Χ 
	 else printf("������");} 		//ifǶ�׵Ľ�����������ڶ���if��Ӧ 
else printf("���Ϸ�"); 	  			
return 0; 
}     
