//�R���X�g���N�^�������q�̌Ăяo���������m�F

#include <iostream>

using namespace std;

class Int
{
	int v; //�l
public:
	Int(int val) : v(val) { cout << v << '\n'; }
};

class Abc
{
	Int a; //�錾���ɏ����������
	Int b;
	Int c; //�N���X��`���̃f�[�^�����o�̐錾�̏��ōs���܂��B

public:													 //�������͂��̏��ł͂Ȃ��i�R���X�g���N�^�������q�ɂ����郁���o�������q�̕��т̏����Ƃ͖��֌W�ł��B�j
	Abc(int aa, int bb, int cc) : c(cc), b(bb), a(aa) {} //�R���X�g���N�^
};

int main()
{
	Abc x(1, 2, 3);
}