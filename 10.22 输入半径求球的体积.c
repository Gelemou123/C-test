#include <stdio.h>
#define PI 3.14
int main()
{system ("color 02");
float r,V; 
printf("请输入半径:");
scanf("%f",&r);
V=(4/3)*PI*r*r*r;
printf("以%f为半径的球的体积是%f",r,V);
}

