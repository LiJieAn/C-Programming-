#include<stdio.h>

void areac(int width, int height);
int main()
{
	int width;
	int height;
	printf("�п�J���P�e:");
	scanf("%d",&width) ;
	scanf("%d",&height);
	areac(width,height);
	return 0;
 } 
void areac(int width,int height)
{
	int area=width*height;
	printf("��%d cm,�e%d cm���x�έ��n����%d���褽�� \n",width,height,area);
}
