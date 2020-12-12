#include<stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	switch (a)
	{
		case 1:/*省略了break關鍵字*/ 
		case 2:
		case 3:
			printf("第一季");
			break;
		case 4:
		case 5:
		case 6:
			printf("第二季");
			break;
		case 7: 
		case 8:
		case 9:
			printf("第三季");
			break;
		case 10:
		case 11:
		case 12:
			printf("第四季");
			break;
		default: 
			printf("-");/*當a這個變數值不再0-12 就不是一個合法的值 →直接輸出格式不符的訊息字串*/ 
	}
	return 0;
}

/*switch 的default預設狀態
當所有的switch判斷式均不符合的情形下 便會執行default區塊
當設定了default 表示這個switch區塊結束之前 一定有一個區塊被執行*/
