#include<stdio.h>

int main()
{
	int x[3]={10};
	double d[3]={1};
	int y[3]={100,200,300,400};
	printf("x:%d,%d,%d \n",x[0],x[1],x[2]);
	printf("d:%f,%f,%f \n",d[0],d[1],d[2]);
	printf("y:%d,%d,%d \n",y[0],y[1],y[2]);
	return 0;
 } 
 
 /* 初始化陣列
陣列可在一開始宣告時 便進行初始化 語法: int x[3]={10,20,30};
直接初始化若沒有指定大小 宣告的陣列會根據指定的初始會內容 自行定義 ex: int y[]={100,200,500}; →y將會是一個長度為3的陣列
初始化的過程中 若沒有指定足夠的元素 其他的內容會以0來取代 但不要配置過多的元素 會導致程式出現不可預測的錯誤*/
/*	[Warning] excess elements in array initializer 在初始化的過程中 指定了超出數量的元素在其中*/ 
