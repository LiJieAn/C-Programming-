#include<iostream>
using namespace std;

int main ()
{
	//Sophia �d�ߥX���Ѫ����ū� �ñN���ഫ���ؤ�ūקi�DSimth
	float temp_c;/*float�i�ŧi�ܼƬ��B�I��*/
	float temp_f;
	const int temp_comfort=86;/*const�N��ۤ@�ӱ`��=�b�o�̳]�m�@�Ӽƭȫᤣ�i���*/ 
	cout<<"�п�J���骺���ū�\n";
	cin>>temp_c;/*��J���ƭȦs�J�ܼ�temp_c*/
	
	//�ū��ഫ�p��
	
	temp_f=temp_c*9/5+32;/*�b=�o�ӹB�⦡�� �k�䪺���G�|�s�J�쥪�䪺�ܼ�*/
	cout<<"���骺���"<<temp_c<<
	"�׬۷��ؤ�"<<temp_f<<"��\n";
	
	// �H���30��(�ؤ�86��)���P�_��� �W�L��ܤѮ𪢼�
	//�i���޿�P�_
	if (temp_f >= temp_comfort) 
	{
		cout<<"�Ѯ𪢼�\n";
		cout<<"�O�o�h�ܤ�\n";
		
		return 0;
		
	}
	
 } 
