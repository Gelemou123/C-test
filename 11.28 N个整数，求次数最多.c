#include<stdio.h> 
 int main()
 {
     int i,j;
     int n; //���ڼ�¼Ҫ����������ĸ��� 
     int a[20]; //���ڴ洢�����n������ 
     int max_num_int; //���ڼ�¼���ִ����������� 
     int max_num; //���ڼ�¼ max_num_int �ĳ��ִ��� 
     
     //���� 
     scanf("%d",&n); //Ҫ����������ĸ��� 
     
     if(n>0&&n<=20) //0<n<=20 
     {
         for(i=0;i<n;i++) //����n������ 
             scanf("%d",&a[i]);
         
         max_num_int=a[0]; //����ֵa[0]����ʼ������Ϊ���ִ����������� 
         max_num=0; //����ֵ0����ʼ���� max_num_int ���ֵĴ���Ϊ0 
         for(i=0;i<n;i++) //����n������ 
         {
             if(a[i]==max_num_int) //�ж���һ�������Ƿ��� max_num_int��� 
                 max_num++; //����ȣ���¼ max_num_int �ĳ��ֵĴ��� 
             else
             {
                 for(j=i;j<n;j++) //������ȣ��ҳ��Ǹ������ĳ��ִ��� 
                     if(a[j]!=a[i])
                         break;
                 if((j-i)>max_num) //������Ǹ������ĳ��ִ������� max_num 
                 {
                     max_num_int=a[i]; //���� max_num_int
                     max_num=1; //���� max_int 
                 }
             }
         }
         
         //��� 
         printf("%d",max_num_int);
     }
     
     return 0;}
