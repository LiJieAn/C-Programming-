#include<stdio.h>

int main()
{
	char var;
	scanf(" %c",&var);/**/ 
	printf("輸入的第一個非空白字元是%c \n",var);/**/ 
	return 0;
}

/*scanf("%c",&var);如果輸入空白字元 依然會被當作一般的字元處理 
輸入的第一個是空白字元 則取得空白字元
要避免
→在格式碼之前加一個空白 就會要求scanf()擷取第一個遇到非空白的字元  
 只有遇到非空白字元 scanf()才會停止擷取的動作 所有的空白都會被略過 
*/ 
