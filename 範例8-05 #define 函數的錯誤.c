/*#define �����D
  2.���~�������B���޿� 
  (1) �Y�O�w�q��Ƶ{���X �i��|�]�B���޿誺�t�� �ɭP�̫�B���޿�D�w��
      �]�B���޿誺�t��  ex:��������[�� ���S���[�A��*/
  
#include<stdio.h>
#define doma(a,b) a*b
#define domb(a,b) (a)* (b)//�z�L�p�A���ХܰѼ� 
int main(){
	int a=1,b=2;
	int ma=doma(a+1,b+2); //1+1*2+2 =1+2+2=5 =>��������[�� +�S�[�A�����B�ⶶ�ǿ��~ 
	int mb=domb(a+1,b+2); // (1+1)*(2+2)=2*4=8  
	printf("doma(a,b):%d\n",ma);
	printf("domb(a,b):%d\n",mb);
	return 0;
}
