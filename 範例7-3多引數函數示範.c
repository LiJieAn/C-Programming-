#include<stdio.h>

void areac(int width, int height);
int main()
{
	int width;
	int height;
	printf("請輸入長與寬:");
	scanf("%d",&width) ;
	scanf("%d",&height);
	areac(width,height);
	return 0;
 } 
void areac(int width,int height)
{
	int area=width*height;
	printf("長%d cm,寬%d cm的矩形面積等於%d平方公分 \n",width,height,area);
}
