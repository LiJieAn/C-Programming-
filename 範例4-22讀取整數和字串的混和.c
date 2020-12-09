 #include<stdio.h>
 
 int main()
 {
 	int d;
 	char str[16];
 	printf("請輸入欲讀取的資料:");/*輸入2012who*/ 
 	scanf("%d",&d);
 	printf("輸入的數值:%d\n",d);
 	scanf("%s",&str);
 	printf("輸入的字串:%s\n",str);
 	return 0;
 	
 }
 
/*輸入值包含整數和字串 scanf()的讀取情況*/ 
/*當scanf()函數讀取整數時 會搜尋資料中一開始整數的部分 將其取出
  其他非數字則留在緩衝區 等待下一次的讀取
  
  若輸入的資料一開始非整數 會導致整數讀取的部分錯誤 整個輸入的資料被當作字串輸出 */ 
