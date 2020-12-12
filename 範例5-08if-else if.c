#include<stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	if(a==0)
	{
		printf("輸入值為0\n");
	}
	else if(a%2==0)
	{
		printf("%d為偶數\n",a);
	}
	else if(a%2>0)
	{
		printf("%d為奇數\n",a);
	}
	return 0;
 } 

/*if-else if
其中的else後方連接著if判斷式 當其中運算為true 流程才會跳至else區塊中執行 
否則整個else區塊的內部區塊不會被執行
if 和else if這兩個區塊 只有一個會執行
如果if判斷式為true 當程式的執行流程跳至其中執行後 在執行完畢時會跳出整個if-else 繼續往下執行 而不再執行else if的判斷 
if(if判斷式)
{
	if區塊程式敘述; 
}
else if(else if判斷式)
{
	else if區塊程式敘述 
}*/ 
