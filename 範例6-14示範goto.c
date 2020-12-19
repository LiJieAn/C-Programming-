#include<stdio.h>

int main()
{
lblinput:
	printf("請輸入一個整數:\n");
	int d;
	scanf("%d",&d);
	
	if(d==0)
		goto lblend;
	if(d%2>0)
		printf("輸入的值%d是奇數 \n\n",d);
	else
		printf("輸入的值%d是偶數 \n\n",d);
	goto lblinput;/*重新將程式流程轉移至第5行 再一次要求使用者輸入測試值*/ 
lblend:
	printf("輸入0,程式結束 \n");
	return 0; 
}
/*因其中使用了goto敘述 因此程式會重複執行 直到輸入0之後 才會跳至程式結束的說明訊息 最後停止執行 

/*goto敘述 特殊的流程控制語法
 提供自訂流程的能力 讓程式設計師取得程式執行流程的控制權
 當程式執行到goto敘述時 他會根據關鍵字後方的標籤名稱 找到此標籤配備的位置 從標籤所在位置開始往下執行 
 語法
 xlabe1:
 
 程式敘述...
 
 goto xlabe1;
 
 xlabe1是自訂的標籤識別名稱 後方須連接 : 
 功能:作為程式位置的定位點 根據流程控制的需求 配置於程式中某個想要執行的位置
 
  

*/
