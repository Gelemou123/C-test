#include <stdio.h>
int main()
{
	

    int i,j,temp;  	//i��ѭ������ 
  	int a[10];
    for (i=0;i<=9;i++)
    {
    	scanf("%d",&a[i]);		//����ʮ������ 
	}
	for (i=0;i<=9;i++) 			//ѭ��ʮ�� 
    {	
        for (j=0;j<9-i;j++)  	//��һð�ݱȽϾŴΣ�Ȼ��ÿ��ð����һ�αȽϣ���Ϊ��С�ı�������� 
        {
            if (a[j]<a[j+1])	//���a[0]<a[1]���ͽ��� 
            {
                temp=a[j];		
                a[j]=a[j+1];
                a[j+1]=temp;	//���м�ֵ���н��� 
            }
        }
    }
    for (i=0; i<=9; ++i)		//���ʮ�ν�� 
    {
        printf("%5d",a[i]);
    }
    printf("\n");
    return 0;
 
}

