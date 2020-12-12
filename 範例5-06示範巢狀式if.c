#include<stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	if(a%2==0)
	{
		if(a==0)
		{
			printf("輸入值%d是0\n",a);	
		}
		if(a!=0)
		{
			printf("輸入值%d是偶數\n",a);			
		}
	}
	return 0;
 } 

/*巢狀式if區塊
 if(外部if判斷式)
 {
 	if(內部if判斷式)
 	{
		內部if程式碼區塊; 
		... 
	}
 }
 外層if的判斷式如果是true會進入內部if區塊 
  進一部執行內部if判斷式 再決定是否執行內部if區塊中的程式碼
 當內部if區塊執行完畢後 會繼續執行外部if區塊剩下的程式碼 直到整個if區塊結束*/ 
