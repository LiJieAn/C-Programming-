/*��ƹB��l �B��L�{�n�`�N
�]�B�⵲�G�ȶW�X���w���A�d��j�p�����~���y������*/

#include<stdio.h>

int main()
{
	int a=2147483647;/*����int���A���̤j��*/ 
	int b=2;
	int result =a+b;/*�W�Xint���A�Ҥ��\���ƭȽd��*/ 
	printf("a+b���� %d \n",result);/*��ܵ��G a+b���� -2147483647*/ 
	return 0;
 } 
 /*��N�@�ӶW�L���A�d�򪺼ƭȳ]�w���ŧi�������A���ܼ� ���ܼƷ|����[����overflow]
  ����N�ɭP�ƭȦ^�Y�q�̤p���ȶ}�l�B��*/ 
/*int�����A�d��-2147483648~2147483647 */
 
