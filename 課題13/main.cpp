#include "Calcation.h"
//�v���g�^�C�v�錾
void SetX(float a, float b);
void SetY(float a, float b);
//�O���[�o���ϐ�
Calclation x, y;
//���C���֐�
int main()
{
	//�C���X�^���X�w�̏���
	SetX(5.0, 10.0);
	x.Disp();
	//�C���X�^���X�x�̏���
	SetY(8.0, 3.0);
	y.Disp();
}
//�C���X�^���X�w�̃A�N�Z�X�֐����Ă�
void SetX(float a, float b)
{
	x.SetA(a);
	x.SetB(b);
}
//�C���X�^���X�x�̃A�N�Z�X�֐����Ă�
void SetY(float a, float b)
{
	y.SetA(a);
	y.SetB(b);
}