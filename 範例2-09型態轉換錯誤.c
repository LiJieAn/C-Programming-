#include<stdio.h>

int main()
{
	short a =32768; /*32768超過short允許宣告的值的範圍 造成[溢位]得到不正確的結果→-32768*/
	unsigned short b=32768;
	short x=65535; /*65535超過short允許宣告的值的範圍 造成[溢位]得到不正確的結果→-1 
					 如果是short型態變數 指定的值超過32767 他會回到最左邊從-32768開始取值*/ 
	unsigned short y=65535;
	long w = 128L;		/* 'L'和'l'會告訴編譯器 我們明確指定一個long型態的數值給w和ww */
	long ww = 128l;	
	printf("a:%d \n",a);
	printf("b:%d \n",b);
	printf("x:%d \n",x);
	printf("y:%d \n",y);
	return 0;
	
}
/*無號整數unsigned 沒有負數 正數的範圍擴充了一倍 可將更大的整數值指定給變數*/
/*整數  short int短整數:2 位元組 -32768~32767
   	    int整數        :4 位元組 -2147483648~2147483647
	    long int長整數 :4 位元組 -2147483648~2147483647
	    unsigned short int無號短整數:2 位元組 0~65535
	    unsigned int無號整數        :4 位元組 0~4294967295
	    unsighed long int無號長整數 :4 位元組 0~4294967295
  浮點數float 浮點數: 4 位元組 1.2E-3~3.4E+38  *3.4E+38=3.4乘以10的38次方 
	    double 倍精度浮整數 :8 位元組 2.3E-308~1.7E+308 
  字元  char字元:1 位元組 -128~127 or 0~225*/  
/*當將一個超過型態範圍的數值設定給宣告為此型態的變數 此變數會產生[溢位overflow]
  溢位將導致數值回頭從最小的值開始運算*/ 

