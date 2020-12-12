#include<stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	if(a>59&&a<=100)
	{
		printf("%d及格\n",a); 
	}
	else if(a<60&&a>39)
	{
		printf("%d不及格，補考 \n",a); 		
	}
	else if(a<40&&a>=0)
	{
		printf("%d死當 \n",a); 	
	}
	else
	{
		printf("分數需介於0~100之間 \n"); 	
	}
	return 0;
}

/*else elsr if的合併使用
在if判斷式中配置了else 表示其他的if判斷是均失敗時 就必須執行這個區塊的程式碼 可視為預設要執行的區塊
else需配置在所有if敘述之後 否則整個if區塊會出現錯誤*/

