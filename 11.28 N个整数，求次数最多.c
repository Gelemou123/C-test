#include<stdio.h> 
 int main()
 {
     int i,j;
     int n; //用于记录要输入的整数的个数 
     int a[20]; //用于存储输入的n个整数 
     int max_num_int; //用于记录出现次数最多的整数 
     int max_num; //用于记录 max_num_int 的出现次数 
     
     //输入 
     scanf("%d",&n); //要输入的整数的个数 
     
     if(n>0&&n<=20) //0<n<=20 
     {
         for(i=0;i<n;i++) //输入n个整数 
             scanf("%d",&a[i]);
         
         max_num_int=a[0]; //赋初值a[0]，开始假设其为出现次数最多的整数 
         max_num=0; //赋初值0，开始假设 max_num_int 出现的次数为0 
         for(i=0;i<n;i++) //遍历n个整数 
         {
             if(a[i]==max_num_int) //判断下一个整数是否与 max_num_int相等 
                 max_num++; //若相等，记录 max_num_int 的出现的次数 
             else
             {
                 for(j=i;j<n;j++) //若不相等，找出那个整数的出现次数 
                     if(a[j]!=a[i])
                         break;
                 if((j-i)>max_num) //如果与那个整数的出现次数大于 max_num 
                 {
                     max_num_int=a[i]; //更新 max_num_int
                     max_num=1; //更新 max_int 
                 }
             }
         }
         
         //输出 
         printf("%d",max_num_int);
     }
     
     return 0;}
