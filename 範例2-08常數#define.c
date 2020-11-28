#include<stdio.h>

#define x 100 /*利用#define預先預告了x y兩個常數的識別字*/
#define y 200

int main()
{
	printf("常數x=%d,y=%d \n",x,y);
	return 0;
	
}
/*除了以const宣告的常數 另一種表示常數的方法 於檔頭以 #define 預先定義處理*/
