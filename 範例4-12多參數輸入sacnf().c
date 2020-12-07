#include<stdio.h>

int main()
{
	int var1;
	int var2;
	char var3;
	scanf("%d %d %c",&var1,&var2,&var3);/*以空白分隔輸入 可接受空白分隔 Tab分隔 Enter分隔*/ /*以逗號分隔 只能以逗號分隔輸入*/ 
	printf("輸入的數等於%d,%d,%c",var1,var2,var3);
	return 0;
	
}

/*scanf("格式碼1,格式碼2,...",&var1,&var2,...)*/
