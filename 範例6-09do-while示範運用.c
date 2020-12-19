#include<stdio.h>

int main()
{
	int i=2;
	int number1=2;
	int j=1;
	int number2=2;
	while(number1%2 !=0)/*開始的初始值為偶數 第一段迴圈無法通過while檢視 沒有任何輸出 */ 
	{
		printf("number1:%d \n",number1);
		number1=3*i;
		i++;
	}
	do/*無論如何都會執行一次 直接輸出其中的number2 */ 
	{
		printf("number2:%d \n",number2);
		number2=3*j;/*number2被調整成三的倍數 
					故迴圈結束時 while判斷式=true→繼續下一次的迴圈 直到number2變成6 結束迴圈*/
		j++;
		
	}while(number2%2 !=0);
	return 0;
}

/*do-while
語法
do
{
	迴圈區塊程式敘述
}while(程式判斷式) ;

關鍵字do定義while迴圈開始 而while迴圈判斷式則在迴圈結束時執行運算 
若結果值為true 這個迴圈會再一次執行 否則跳出迴圈 

do-while 和while迴圈的差別:
do-while無論如何都會(無條件執行)先執行一次區塊中的程式碼 即便while的判斷式結果為false
在大部分的場合 while do-while沒有差別 只會影響第一次的執行 */ 
