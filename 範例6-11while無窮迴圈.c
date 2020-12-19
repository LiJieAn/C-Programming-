#include<stdio.h>

int main()
{
	int b;
	scanf("%d",&b);
	while(b) /*若輸入非0整數 造成無窮迴圈→不斷輸出loop ;輸入0→while無法通過條件式→程式直接結束*/ 
	{
		printf("loop \n");
	}
	return 0; 
	
	/*int count =1;
	while(2)
	{
		printf("%d",count);
		count ++;
	}
	return 0;*/ 
}

/*while無窮迴圈
while()中的判斷式可直接指定一個非零的值→將導致無窮迴圈
因每次while運算式的結果均是true →永遠無法跳出迴圈→程式永遠無法終止執行
while()中的判斷式可直接指定為0→將導致永遠無法執行其中的程式碼 
因每次while運算式的結果均是false →永遠無法進入迴圈→程式永遠無法執行 

可建立一個無窮迴圈 再於迴圈區塊內指定所要結束的條件值 於適當時機結束迴圈的運算 

可搭配break設定終止條件改變迴圈的行為 
語法
while(1)
{
	迴圈區塊程式運算 
}
*/ 
