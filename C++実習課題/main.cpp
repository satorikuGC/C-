#include "Sample.h"
//SampleClass �N���X�̃|�C���^��p��
SampleClass* a;
//���C���֐�
int main()
{
	//�N���X�̃C���X�^���X�i���ԁj�����
	a = new SampleClass;
	//�R�̃����o�֐����Ăяo��
	a->Input();
	a->Plus();
	a->Disp();
	//�g���I������C���X�^���X���폜
	delete a;
}