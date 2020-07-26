/*c語言區分大小寫*/
/*存檔時記得改成c sourse files再存檔*/
/*程式進入點 main*/
/*<-之間的任何文字c將其視為註解->*/
/*#include 表示要將外部的檔案含括進來*/
/*這些副檔名為.h的檔案 稱為 標頭檔
  每一個標頭檔收錄了功能相近的函數
  stdio,h stdlib.h是最常見的兩個標頭檔
  stdio.h提供標準輸出和輸入功能的相關函數 
  stdlib.h提供各種標準的函數*/ 
/*main()是一個函數宣告 
        為主函數 為程式執行的起始點
		一定要具有此函數*/
/*{表示函數開始
  }表示函數結束*/
/*在大括弧{}內的程式碼 
  每一行程式碼代表一個運算式  
  以分號 ; 結束 
  !!!只有在遇到分號 ; 一段程式的運算式才會被視為結束 即使遇到斷行 他還是會將其視為同樣一段程式碼 
                                                     同樣的 可將程式碼全部並成一行 int x;x=100;*/ 
/*每一行程式碼是一個執行單位
  程式敘述(Statement)定義可完整獨立執行的程式單位 代表一段可執行的程式碼 由運算式定義其內容
  運算式(Expression)由各種語法元素(變數 資料型態 運算子)組成
  一般的運算式依循既定的數學運算規則(由左至右 先乘除後加減 小括弧優先處理...)
  運算式是形成程式運算邏輯的核心 !!!但無法獨立執行 
  
  運算式要組合成可獨立執行的程式敘述 須在最後加上;代表一段完整的程式敘述 他有以下幾種形式:
  型態變數宣告
  經由 = 所定義的設值運算 
  引用++或 -- 的運算式
  引用函數 
  如圖1-4  */ 

/*printf()←為函數  將其中指定的內容輸出於畫面*/
/*get()←為函數 接收使用者輸入的資料*/ 
/*system("pause") 暫停程式 可檢視執行的內容*/
/*return 0 回傳一個0的值*/
/*雙引號""的內容表示一段字串 若直接在其中將其斷行 將導致編譯器無法辨識 而編譯失敗*/
/*變數用來儲存資料 每一種變數皆有其特定的型態 使用前必須宣告其型態 表示變數所要儲存的資料種類*/ 
/*無論你建立的應用程式目的為何 主要的功能目標只有一個:處理各種形式的I/O→為資料的輸入和輸出*/ 

