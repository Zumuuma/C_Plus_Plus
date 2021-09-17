//�J�E���^�N���XCounter�i��Q�Łj

#ifndef ___Class_Counter
#define ___Class_Counter

#include <climits>

//=====�J�E���^�N���X=====//
class Counter
{
	unsigned cnt; //�J�E���^

public:
	//---�R���X�g���N�^---//
	Counter() : cnt(0) {}

	//---unsigned�^�ւ̕ϊ��֐�---//
	operator unsigned() const { return cnt; }

	//---�_���ے艉�Z�q!---//
	bool operator!() const { return cnt == 0; }

	//---�O�u�������Z�q++ ---//
	Counter &operator++()
	{
		if (cnt < UINT_MAX) //�J�E���^�̏����UINT_MAX
		{
			cnt++;
		}
		return *this; //�������g�ւ̎Q�Ƃ�ԋp
	}

	//---��u�������Z�q++ ---//
	Counter operator++(int)
	{
		Counter x = *this; //�C���N�������g�O�̒l��ۑ�
		++(*this);		   //�O�u�������Z�q�ɂ���ăC���N�������g
		return x;		   //�ۑ����Ă����l��ԋp
	}

	//--�O�u�������Z�q-- ---//
	Counter &operator--()
	{
		if (cnt > 0) //�J�E���^�̉����͂O
		{
			cnt--;
		}
		return *this; //�������g�ւ̎Q�Ƃ�ԋp
	}

	//---��u�������Z�q-- ---//
	Counter operator--(int)
	{
		Counter x = *this; //�f�N�������g�O�̒l��ۑ�
		--(*this);		   //�O�u�������Z�q�ɂ���ăf�N�������g
		return x;		   //�ۑ����Ă����l��ԋp
	}
};

#endif