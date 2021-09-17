#ifndef ___TinyInt
#define ___TinyInt

#include <climits>
#include <iostream>

//---豆整数クラス---//
class TinyInt
{
	int v; //値

public:
	//---コンストラクタ---//
	TinyInt(int value = 0) : v(value) {}

	//---intへの変換関数---//
	operator int() const { return v; }

	//---論理否定演算子!---//
	bool operator!() const { return v == 0; }

	//---前置増分演算子++ ---//
	TinyInt &operator++()
	{
		if (v < INT_MAX)
		{
			v++; //値の上限はINT_MAX
		}
		return *this;
	}

	//---後置増分演算子++ ---//
	TinyInt operator++(int)
	{
		TinyInt x = *this; //インクリメント前の値を保存
		++(*this);		   //前置増分演算子によってインクリメント
		return x;		   //保存していた値を返却
	}

	friend TinyInt operator+(const TinyInt &x, const TinyInt &y) //x + y
	{
		return TinyInt(x.v + y.v);
	}

	//---複合代入演算子 += ---//
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