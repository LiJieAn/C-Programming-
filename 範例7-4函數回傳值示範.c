#include<stdio.h>

int areac(int width,int height);
int main()
{
	int width;
	int height;
	int area;
	printf("�п�J���P�e:\n");
	scanf("%d",&width);
	scanf("%d",&height);
	area=areac(width,height);
	printf("��%dcm,�e%dcm���x�έ��n����%d���褽��\n",width,height,area);
	return 0;
	
 }
int areac(int width,int height)
{
	int area=width*height;
	return area;
 } 
