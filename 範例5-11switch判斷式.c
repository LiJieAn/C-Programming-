#include<stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	switch(a)
	/*switch後方運算式的運算結果 會和接下來區塊中的case後方的值逐一比對 比對吻合 進入其中執行 結束後跳出整個switch*/ 
	{
		case 1:
			printf("星期一");
			break;
		case 2:
			printf("星期二");
			break;
		case 3:
			printf("星期三");
			break;
		case 4:
			printf("星期四");
			break;
		case 5:
			printf("星期五");
			break; 
		case 6:
			printf("星期六");
			break; 
		case 7:
			printf("星期天");
			break; 		
	 } 
}

/*switch判斷式
對同一個運算式的結果 實作出多重判斷結構 類似多重區塊的選擇執行
語法
switch()
{
	case value1:
		符合value1 程式敘述
		break;
	case value2:
		符合value2 程式敘述
		breal;
	    ...
	case valuen: 
		符合valuen 程式敘述
		break;
		 
}

switch關鍵字→建構多重判斷式的程式區塊
1.緊接著小括號裡面的運算式 其結果作為所要執行的區塊依據 
2.運算式的結果必須使byte short char int中一種整數型態的值 否則這個判斷式會失敗 
3.緊接著switch大括弧裡面的區塊 以case關鍵字開始 定義各種情況下所要執行的區塊內容 
4.case後方緊接比對值 當switch運算式的執行結果符合這個條件式 則其中的內容會執行 
5.每個case區塊的最後的break敘述 表這個case區塊結束 這一行會跳出整個switch 
6.只有一個case會執行 
7.switch後方運算式的運算結果 會和接下來區塊中的case後方的值逐一比對 比對吻合 進入其中執行 結束後跳出整個switch 
*/ 
