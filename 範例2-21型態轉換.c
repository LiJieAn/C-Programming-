#include<stdio.h> 

int main()
{
	int x=100;/*int����ƫ��A*/
	float y=100.001;/*float���B�I�ƫ��A *��T�׵L�k�����X��8��� *float���ƭȧ��������[�Wf*/
	float a=(float)x;/*�Nint���A��x�Ǵ���float���A �N���G�x�s��a*/ 
	int b=(int)y  ;/*�Nfloat���A��y�ഫ��int���A �N���G�x�s��b*/ 
	printf("x:%d \n",x);
	printf("y:%6.3f \n",y);
	printf("a:%6.3f \n",a);/**/ 
	printf("b:%d \n",b);/*b:100 �쥻��y���p���I�Q�˥h*/ 
	return 0;
	
}

/*
���A�ഫ���N�Y�ث��A���ܼ��ഫ���t�@�ث��A
(type)var;
()���ҭn�ഫ��[�ؼ�]���A
var���ҭn�ഫ���ܼ�
����{�����N�ܼ�var�q�쥻�����A�ഫ��type���A 
*/ 
/*�૬�n�p�� �_�h�|�ɭP��ƿ��~ �ɶq�קK�૬
�j�d�򫬺A�ഫ���p�d�򫬺A �|�ɭP��ƿ� 
ex:float��int �p���I�|�Q�L����˥h*/ 
