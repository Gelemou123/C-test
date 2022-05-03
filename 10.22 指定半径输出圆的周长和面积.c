#include <stdio.h>
#define PI 3.14
int main()
{system("color 02");
float r=2,area;
area=PI*r*r;
printf("半径为%f的圆的面积为:%f\n",r,area);
float girth;
girth=2*PI*r;
printf("圆的周长为:%f",girth);
}
