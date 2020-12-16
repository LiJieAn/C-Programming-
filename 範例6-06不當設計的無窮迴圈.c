#include<stdio.h>

int main()
{
	int i;
	for(i=0;i<10;i--)
	{
		printf("loop:%d \n",i);
	}
	return 0;
 } 

/*在範例6-05看到了迴圈設計的彈性 但若不小心使用 將導致無窮迴圈的結果*/
/*i<10持續執行 i>=10才能終止迴圈
而i--永遠無法達到或停止迴圈的設定 導致無窮迴圈*/ 
