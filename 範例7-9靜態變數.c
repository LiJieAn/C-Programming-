#include<stdio.h>

void dox();
void doy();

int main()
{
	int i=0;
	for(i=0;i<3;i++)
	{
		dox();
		doy();
	}
	return 0;
	
 } 
void dox()
{
	static int a=100;/*每次dox()的變數a的值在結束之後會被保留下來 →a的值會一直增加 因為下一次迴圈引用dox()時a的值是前一次執行函數後的值*/ 
	printf("dox():a=%d, ",a);
	a+=100;
}
void doy()
{
	int a=100;/*沒有引用static 為一般的變數 每一次執行時 他會重新配置並進行初始化 即使在函數結束前+100 對下一次的執行不會有任何影響*/ 
	printf("doy():a=%d \n",a);
	a+=100;
}
