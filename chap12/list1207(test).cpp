//�������Ƒ��/�l�n���ƎQ�Ɠn���̌���

#include <iostream>

using namespace std;

//=====���ؗp�N���X=====//
class Test
{
public:
	Test() //�f�t�H���g�R���X�g���N�^
	{
		cout << "������ : Test()\n";
	}

	Test(const Test &t) //�R�s�[�R���X�g���N�^
	{
		cout << "������ : Test(const Test&)\n";
	}

	Test &operator=(const Test &t) //������Z�q
	{
		cout << "��@�� : Test = Test\n";
		return *this;
	}
};

//---�l�n��---//
void value(Test a) {} //�R���X�g���N�^���Ăяo�����

//---�Q�Ɠn��---//
void reference(Test &a) {} //�R���X�g���N�^�͌Ăяo����Ȃ�

int main()
{
	Test x;		  //�f�t�H���g�R���X�g���N�^
	Test y = x;	  //�R�s�[�R���X�g���N�^
	Test z(x);	  //�R�s�[�R���X�g���N�^
	y = x;		  //������Z�q
	value(x);	  //�֐��Ăяo���i�l�n���j
	reference(x); //�֐��Ăяo���i�Q�Ɠn���j
}