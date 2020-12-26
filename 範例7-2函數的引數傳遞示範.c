#include<stdio.h>

void hour2min(int hour);
int main()
{
	int hour;
	printf("輸入小時數:");
	scanf("%d",&hour);
	hour2min(hour);/*呼叫hour2min()函數 並將hour傳入 執行轉換的功能 
	return 0;
 } 
 void hour2min(int hour)/*hour2min()函數接受一個hour參數代表所要轉換的小時數 為int型態*/ 
 {
 	int min=hour*60;
 	printf("%d小於等於%d分鐘\n",hour,min);
 }
 /*
 void dosome(void)→原型宣告 
{                      →{}中形成程式的區塊範圍 定義函數功能所需的程式敘述 
	函數功能程式碼
}
第一個void→函數執行完要回傳的資料型態 void:表示這個函式執行完將不回傳任何值
函數後方必接()→用來承接特定型態的引數 
第二個void→表示沒有傳入任何引數 
完成函數的宣告後 透過名稱dosome的引用即可呼叫此函式 執行其中的程式碼功能
dosome(); 名稱後方要加小括號 和分號; 才能構成一個完整的程式敘述

函數可在呼叫的同時 將參數傳遞進去→在宣告和定義函數的同時 完成引數的定義
函數名稱後的()→定義承接外部傳入參數的引數型態名稱
函數的定義則須進一步指定每一個引數的變數名稱 
呼叫此種函數的程式碼 須根據定義 傳入對應型態的參數 在函數中直接透過引數名稱便能將其取出
在函數呼叫的過程中 參數會被傳遞進去函數括號裡 被當作函數本身的變數使用 
函數接受一個以上的參數 每一個參數均必指定其形態 並以逗號隔開 
語法
void dosome(type1 arg1,type2 arg2,...); →tyoe餐數型態 arg參數 
{
	函數desome區塊程式碼
} */ 
