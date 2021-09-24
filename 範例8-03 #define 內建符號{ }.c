//#define 可取代預設的語法符號 但為了程式的可讀性 不建議這樣做
//以下為破壞程式可讀性的錯誤示範
#include<stdio.h>
#define L_ {
#define R_ }
int main()L_
	
	printf("hello...\n");
	return 0;
	
R_
