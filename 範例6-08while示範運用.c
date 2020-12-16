#include<stdio.h>

int main()
{
	int i=0;
	int j=10;
	while(i<j)
	{
		i+=3;/*因i每次比j 多加2 所以經過5次迴圈的計算後 i的值會追上j 
		j+=1;
	
	}
	printf("i=%d j=%d \n",i,j);
	return 0;
 } 
/*while迴圈
當執行的迴圈沒有固定次數 適合用while迴圈
若用for迴圈會較麻煩 除了可利用無窮迴圈 還須設定終止條件
相較於for while較單純 只需判斷條件值 沒有計數的問題 
語法
while(迴圈判斷式)
{
	迴圈區程式敘述 
}
迴圈判斷式回傳的true/false運算結果 
如果結果不等於0→true   執行while大括弧內的程式敘述 完成後會再回到while重新執行一次判斷式 直到判斷式的值為0→false為止

while根據()內判斷式的運算結果 決定是否執行大括弧裡面的程式碼 
→他執行迴圈的次數不固定 
*/ 
