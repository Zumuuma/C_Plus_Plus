//---����N���X�̗��p��---//

#include <iostream>
#include "Member.h"

using namespace std;

void print(Member *p)
{
	p->print(); //�����o�֐�print�̌Ăяo��
}

int main()
{
	Member okada("���c�ށX", 1, 47);	  //�R���X�g���N�^�̌Ăяo��
	okada.set_rank(okada.get_rank() + 1); //�����N���P�����A�b�v����
	print(&okada);						  //�\��
}