#include<stdio.h>

int main()
{
	short a =32768; /*32768�W�Lshort���\�ŧi���Ȫ��d�� �y��[����]�o�줣���T�����G��-32768*/
	unsigned short b=32768;
	short x=65535; /*65535�W�Lshort���\�ŧi���Ȫ��d�� �y��[����]�o�줣���T�����G��-1 
					 �p�G�Oshort���A�ܼ� ���w���ȶW�L32767 �L�|�^��̥���q-32768�}�l����*/ 
	unsigned short y=65535;
	printf("a:%d \n",a);
	printf("b:%d \n",b);
	printf("x:%d \n",x);
	printf("y:%d \n",y);
	return 0;
	
}
/*�L�����unsigned �S���t�� ���ƪ��d���X�R�F�@�� �i�N��j����ƭȫ��w���ܼ�*/
/*���  short int�u���:2 �줸�� -32768~32767
   	    int���        :4 �줸�� -2147483648~2147483647
	    long int����� :4 �줸�� -2147483648~2147483647
	    unsigned short int�L���u���:2 �줸�� 0~65535
	    unsigned int�L�����        :4 �줸�� 0~4294967295
	    unsighed long int�L������� :4 �줸�� 0~4294967295
  �B�I��float �B�I��: 4 �줸�� 1.2E-3~3.4E+38  *3.4E+38=3.4���H10��38���� 
	    double ����ׯB��� :8 �줸�� 2.3E-308~1.7E+308 
  �r��  char�r��:1 �줸�� -128~127 or 0~225*/  
/*��N�@�ӶW�L���A�d�򪺼ƭȳ]�w���ŧi�������A���ܼ� ���ܼƷ|����[����overflow]
  ����N�ɭP�ƭȦ^�Y�q�̤p���ȶ}�l�B��*/ 
