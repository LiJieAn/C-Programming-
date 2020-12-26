/*函數→提供程式碼的重複使用 
將需要的功能獨立切割出來 並包裝成不同的函數 透過呼叫達到實作程式功能
相較於將所有功能寫在main()裡面 函數使程式更為彈性 易於維護 
且當任何地方需要相同的功能 直接呼叫即可

標準函數 透過標頭檔含括進來即可使用
stdio.h
stdlib.h

函數
1.原型宣告:如同變數宣告 在定義函數之前 必須預先宣告函數的原型→目的告知編譯器檔案中存在此函數 
           原型→函數的名稱 引數 回傳值的型態 
2.內容定義:根據原型 定義函數的內容程式碼 建構所需的功能 
3.呼叫:需要執行函數功能時 直接透過名稱的引用 對其進行呼叫 

語法
void dosome(void)→原型宣告 
{                      →{}中形成程式的區塊範圍 定義函數功能所需的程式敘述 
	函數功能程式碼
}
第一個void→函數執行完要回傳的資料型態 void:表示這個函式執行完將不回傳任何值
函數後方必接()→用來承接特定型態的引數 
第二個void→表示沒有傳入任何引數 
完成函數的宣告後 透過名稱dosome的引用即可呼叫此函式 執行其中的程式碼功能
dosome(); 名稱後方要加小括號 和分號; 才能構成一個完整的程式敘述 
*/ 
