#include<stdio.h>

void hour2min(int hour);
int main()
{
	int hour;
	printf("��J�p�ɼ�:");
	scanf("%d",&hour);
	hour2min(hour);/*�I�shour2min()��� �ñNhour�ǤJ �����ഫ���\�� 
	return 0;
 } 
 void hour2min(int hour)/*hour2min()��Ʊ����@��hour�ѼƥN��ҭn�ഫ���p�ɼ� ��int���A*/ 
 {
 	int min=hour*60;
 	printf("%d�p�󵥩�%d����\n",hour,min);
 }
 /*
 void dosome(void)���쫬�ŧi 
{                      ��{}���Φ��{�����϶��d�� �w�q��ƥ\��һݪ��{���ԭz 
	��ƥ\��{���X
}
�Ĥ@��void����ư��槹�n�^�Ǫ���ƫ��A void:��ܳo�Ө禡���槹�N���^�ǥ����
��ƫ�襲��()���Ψөӱ��S�w���A���޼� 
�ĤG��void����ܨS���ǤJ����޼� 
������ƪ��ŧi�� �z�L�W��dosome���ޥΧY�i�I�s���禡 ����䤤���{���X�\��
dosome(); �W�٫��n�[�p�A�� �M����; �~��c���@�ӧ��㪺�{���ԭz

��ƥi�b�I�s���P�� �N�Ѽƶǻ��i�h���b�ŧi�M�w�q��ƪ��P�� �����޼ƪ��w�q
��ƦW�٫᪺()���w�q�ӱ��~���ǤJ�Ѽƪ��޼ƫ��A�W��
��ƪ��w�q�h���i�@�B���w�C�@�Ӥ޼ƪ��ܼƦW�� 
�I�s���ب�ƪ��{���X ���ھکw�q �ǤJ�������A���Ѽ� �b��Ƥ������z�L�޼ƦW�٫K��N����X
�b��ƩI�s���L�{�� �ѼƷ|�Q�ǻ��i�h��ƬA���� �Q��@��ƥ������ܼƨϥ� 
��Ʊ����@�ӥH�W���Ѽ� �C�@�ӰѼƧ������w��κA �åH�r���j�} 
�y�k
void dosome(type1 arg1,type2 arg2,...); ��tyoe�\�ƫ��A arg�Ѽ� 
{
	���desome�϶��{���X
} */ 
