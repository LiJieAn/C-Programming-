/*迴圈
主要包含兩個主要部分 判斷是否重複執行的條件運算式 和重複執行的程式區
 當程式進入迴圈 會先經過一個判斷式 如同if判斷式 
 如果符合迴圈條件 執行其中預先設計好的迴圈區塊 
 執行完畢後 "程式流程再回到迴圈開始的地方判斷"
 這個流程會重複執行 直到迴圈判斷失敗為止 此時迴圈會終止 跳出迴圈後往下執行*/
/*當要重複執行某段程式碼 需考量
1.重複的次數→決定要使用何種迴圈  
2.執行動作停止的動機 

重複執行的次數固定→for敘述*/ 
/*for迴圈 
for(計數初始值;迴圈判斷式;改變計數)
{
	迴圈區塊程式敘述
}
for關鍵字定義迴圈所要執行的次數 結束的時機 →全指定在for()中
         {}中式迴圈每一次重複執行的內容
		 
for(計數初始值;迴圈判斷式;改變計數)  !以;區隔 
計數初始值:一段完整的運算式 初始化計數器的起始值 此運算式只會執行一次
迴圈判斷式:一組運算式 定義計數器何時停止 
		   結果是true→表示迴圈將繼續重複執行迴圈中的程式碼
		         false→跳出迴圈
改變計數:一段完整的運算式 負責改變計數器的值 通常針對計數器的值進行遞增或遞減 
 
 當沒有辦法明確指定何時停止程式的執行→在for迴圈中加入if判斷式
巢狀式for迴圈
當在每一次迴圈中 再執行一次迴圈作業時
語法
for(計數初始值;迴圈判斷式;改變計數)
{
	for(計數初始值;迴圈判斷式;改變計數)
	{
		statement;	
	}
}
巢狀迴圈的內部for迴圈 會在每一次外部for迴圈進入執行時 重新完整的執行一次
外部迴圈每執行一次 內部迴圈必須完整執行一次  
→內部迴圈執行次數=本身的次數+ 乘以 外部迴圈的次數*/ 

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

do-while
語法
do
{
	迴圈區塊程式敘述
}while(程式判斷式) ;
關鍵字do定義while迴圈開始 而while迴圈判斷式則在迴圈結束時執行運算 
若結果值為true 這個迴圈會再一次執行 否則跳出迴圈 
do-while 和while迴圈的差別:
do-while無論如何都會(無條件執行)先執行一次區塊中的程式碼 即便while的判斷式結果為false
在大部分的場合 while do-while沒有差別 只會影響第一次的執行 

while無窮迴圈
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
/*if 決策流程控制語法
  適合判斷式只有true(真)或false(偽) 兩種結果的判斷式 
  基本語法:
  if(判斷式)
  {
  	if 程式區塊;
	  ... 
  } 
  其他程式敘述;
  ..... 
  
  if關鍵字構成判斷式的程式區塊
  關鍵字後的小括號的判斷式是運算式 會回傳true/false(1/0)的結果 
  左右的大括號形成if程式區塊 根據判斷式的執行結果來決定是否執行其中的程式碼
  若判斷式回傳值為非0→true 則進入大括號區塊中執行 
  否則直接跳出區塊內容繼續往右大括號弧的下一行程式敘述(如果有了話)開始執行 
  
*在布林形態時討論過 c語言沒有這種型態 
某些程式語言提供"布林"的資料型態
→表示true false等兩種可能的值
true:表示真的狀態
false:表示偽的狀態
C語言沒有 布林的資料型態
C語言以0或非0的整數值作表示
當一個運算式最後得到非0的結果→被視為true→此運算式成立
當一個運算式最後得到0的結果→被視為false→此運算式不成立 
!!c語言將所有非0的值視為true

巢狀式if區塊
 if(外部if判斷式)
 {
 	if(內部if判斷式)
 	{
		內部if程式碼區塊; 
		... 
	}
 }
 外層if的判斷式如果是true會進入內部if區塊 
  進一部執行內部if判斷式 再決定是否執行內部if區塊中的程式碼
 當內部if區塊執行完畢後 會繼續執行外部if區塊剩下的程式碼 直到整個if區塊結束
 
 判斷式最後輸出的結果無論是true/false都必須做出回應
→if-else包含兩段式輸出結果
  如寡條件式判斷式最後的運算結果是false 則會無條件執行else後方大括號程式區塊裡面的else程式區塊 
  
  if-else同樣支持省略大花號的程式敘述 
if(if判斷式)
{
	if程式區塊;
	... 
} 
else
{
	else程式區塊;
	...
}

if-else if
其中的else後方連接著if判斷式 當其中運算為true 流程才會跳至else區塊中執行 
否則整個else區塊的內部區塊不會被執行
if 和else if這兩個區塊 只有一個會執行
如果if判斷式為true 當程式的執行流程跳至其中執行後 在執行完畢時會跳出整個if-else 繼續往下執行 而不再執行else if的判斷 
if(if判斷式)
{
	if區塊程式敘述; 
}
else if(else if判斷式)
{
	else if區塊程式敘述 
}

else elsr if的合併使用
在if判斷式中配置了else 表示其他的if判斷是均失敗時 就必須執行這個區塊的程式碼 可視為預設要執行的區塊
else需配置在所有if敘述之後 否則整個if區塊會出現錯誤*/
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
8.省略break 須讓兩個共用敘述的case並列 才得到所要的效果 可省略一個以上的break
9.witch 的default預設狀態
  當所有的switch判斷式均不符合的情形下 便會執行default區塊
  當設定了default 表示這個switch區塊結束之前 一定有一個區塊被執行*/

/*強制中斷迴圈
預設情況下 到達指定條件才會結束迴圈的執行
當需要強制程式流程離開正常執行的迴圈→
1.break
如同在switch敘述中的功能
將其配置在迴圈區塊內指定的位置 就能達到中斷得效果
當程式執行到break這一敘述 迴圈便會中斷 跳出整個大括弧的執行範圍
!!注意因break會無條件中斷並跳出迴圈 故通常會搭配if敘述決定是否要執行 在某些條件符合的形況下 才會執行break敘述來中斷迴圈
語法
while()
{
	...
	break;//程式在此跳出迴圈 
	
}

2.2.continue
中斷迴圈 
!!只會跳出目前的迴圈 但不會停止迴圈的執行 而是直接執行下一次的迴圈
→continue中斷的只是目前的迴圈
*/
