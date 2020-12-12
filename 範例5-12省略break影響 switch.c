#include<stdio.h>

int main()
{
	char g;
	printf("輸入年齡:A(0-13) B(14-20) C(21-60) D(>65) \n");
	scanf("%c",&g);
	switch (g)
	{
		case 'A':
			printf("兒童票:50");
			break;
		case 'B':/*省略了內容 票價設定BC的票種相同 因此輸入BC都會跳至15行輸出相同的訊息*/
			/*printf("成人票:100");
			break;*/ 
		case 'C':
			printf("成人票:100");
			break;
		case 'D':
			printf("老人票:80");
			break;
	}
	return 0;
 } 
 /*省略break 
  須讓兩個共用敘述的case並列 才得到所要的效果
  可省略一個以上的break*/ 
