#include<iostream>
using namespace std;

int main ()
{
	//Sophia 查詢出今天的攝氏溫度 並將之轉換成華氏溫度告訴Simth
	float temp_c;/*float可宣告變數為浮點數*/
	float temp_f;
	const int temp_comfort=86;/*const代表著一個常數=在這裡設置一個數值後不可更改*/ 
	cout<<"請輸入今日的攝氏溫度\n";
	cin>>temp_c;/*輸入的數值存入變數temp_c*/
	
	//溫度轉換計算
	
	temp_f=temp_c*9/5+32;/*在=這個運算式中 右邊的結果會存入到左邊的變數*/
	cout<<"今日的攝氏"<<temp_c<<
	"度相當於華氏"<<temp_f<<"度\n";
	
	// 以攝氏30度(華氏86度)為判斷基準 超過表示天氣炎熱
	//進行邏輯判斷
	if (temp_f >= temp_comfort) 
	{
		cout<<"天氣炎熱\n";
		cout<<"記得多喝水\n";
		
		return 0;
		
	}
	
 } 
