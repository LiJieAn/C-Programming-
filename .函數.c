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
}

回傳函數值 根據所要回傳的型態進行定義
針對這種預先定義回傳型態的函數 因執行完畢後會回傳一個特定的值 因此需以一個預先宣告的相同型態變數承接回傳的結果→x=dosome(arg,...)其dosome的回傳值會被儲存至x變數 此變數同樣被宣告為int
回傳型態要和回傳值搭配 
對於有回傳值的函數也可直接呼叫 不須有任何變數儲存其回傳的值 但如此一來 人就無法取得回傳的結果
int →最後要回傳一個int型態的整數值 →定義時也需指定所要回傳的型態 程式最後須以return回傳指定的值
int dosome(type1 arg1,type2 arg2,...)
{
	
	...
	return value;→回傳value 也可以式變數 常數 運算式
	
}

變數和宣告範圍
區域變數
當在函數內宣告一個變數 這個變數的有效範圍就被限制在函數內部{}中 一旦離開這個範圍 變數就失效了
將函數裡面宣告的變數稱為"區域變數" 不可再函數的有效範圍區域外存取這個變數 無論對其進行任何形式的引用或設值
在同一個函數內 變數只有在宣告的那一行開始才有效 在此之前 如果嘗試使用這個變數會產生錯誤
函數的引數本身也是函數的區域變數 只能在函數的內部使用 外部的程式碼只能透過指定的值透過這個引數傳入

全域變數
宣告於函數之外 不屬於任何函數 宣告方式和區域變數相同
所有函數內的程式碼都可以對全域變數進行存取 不受任何函數的範圍限制
注意!!當在函數區域宣告的變數名稱和某全域變數相同 函數內的變數會被優先使用→區域變數為第一優先順位
未宣告同名的區域變數的函數 則會使用全域變數的版本

靜態變數
在函數結束時 將所儲存的值保留下來 當下次函數被呼叫時 變數值不會被改變
以static宣告 
看範例7-9

函數的參數傳遞方式
將一個參數傳入一個具有引數的函數時
函數的引數以"傳值"的方式進行傳遞 當一個變數被傳入函數時 只有他本身的值被傳入 而非變數 →稱此為"傳值"
因只有變數值被傳遞進去 而且這個值只是複本 跟變數沒有關係 無論函數裡面進行任何運算 變數的值都不會有任何影響



*/ 
