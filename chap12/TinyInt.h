#ifndef ___TinyInt
#define ___TinyInt

#include <climits>
#include <iostream>

//---�������N���X---//
class TinyInt
{
	int v; //�l

public:
	//---�R���X�g���N�^---//
	TinyInt(int value = 0) : v(value) {}

	//---int�ւ̕ϊ��֐�---//
	operator int() const { return v; }

	//---�_���ے艉�Z�q!---//
	bool operator!() const { return v == 0; }

	//---�O�u�������Z�q++ ---//
	TinyInt &operator++()
	{
		if (v < INT_MAX)
		{
			v++; //�l�̏����INT_MAX
		}
		return *this;
	}

	//---��u�������Z�q++ ---//
	TinyInt operator++(int)
	{
		TinyInt x = *this; //�C���N�������g�O�̒l��ۑ�
		++(*this);		   //�O�u�������Z�q�ɂ���ăC���N�������g
		return x;		   //�ۑ����Ă����l��ԋp
	}

	friend TinyInt operator+(const TinyInt &x, const TinyInt &y) //x + y
	{
		return TinyInt(x.v + y.v);
	}

	//---����������Z�q += ---//
	TinyInt &operator+=(const TinyInt &x)
	{
		v += x.v;
		return *this;
	}
	friend bool operator==(const TinyInt &x, const TinyInt &y) { return x.v == y.v; }
	friend bool operator!=(const TinyInt &x, const TinyInt &y) { return x.v != y.v; }
	friend bool operator>(const TinyInt &x, const TinyInt &y) { return x.v > y.v; }
	friend bool operator>=(const TinyInt &x, const TinyInt &y) { return x.v >= y.v; }
	friend bool operator<(const TinyInt &x, const TinyInt &y) { return x.v < y.v; }
	friend bool operator<=(const TinyInt &x, const TinyInt &y) { return x.v <= y.v; }
	friend std::ostream &operator<<(std::ostream &s, const TinyInt &x)
	{
		return s << x.v;
	}
};

#endif