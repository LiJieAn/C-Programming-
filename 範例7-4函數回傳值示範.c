#include<stdio.h>

int areac(int width,int height);
int main()
{
	int width;
	int height;
	int area;
	printf("請輸入長與寬:\n");
	scanf("%d",&width);
	scanf("%d",&height);
	area=areac(width,height);
	printf("長%dcm,寬%dcm的矩形面積等於%d平方公分\n",width,height,area);
	return 0;
	
 }
int areac(int width,int height)
{
	int area=width*height;
	return area;
 } 
