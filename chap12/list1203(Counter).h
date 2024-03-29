//カウンタクラスCounter（第２版）

#ifndef ___Class_Counter
#define ___Class_Counter

#include <climits>

//=====カウンタクラス=====//
class Counter
{
	unsigned cnt; //カウンタ

public:
	//---コンストラクタ---//
	Counter() : cnt(0) {}

	//---unsigned型への変換関数---//
	operator unsigned() const { return cnt; }

	//---論理否定演算子!---//
	bool operator!() const { return cnt == 0; }

	//---前置増分演算子++ ---//
	Counter &operator++()
	{
		if (cnt < UINT_MAX) //カウンタの上限はUINT_MAX
		{
			cnt++;
		}
		return *this; //自分自身への参照を返却
	}

	//---後置増分演算子++ ---//
	Counter operator++(int)
	{
		Counter x = *this; //インクリメント前の値を保存
		++(*this);		   //前置増分演算子によってインクリメント
		return x;		   //保存していた値を返却
	}

	//--前置減分演算子-- ---//
	Counter &operator--()
	{
		if (cnt > 0) //カウンタの下限は０
		{
			cnt--;
		}
		return *this; //自分自身への参照を返却
	}

	//---後置減分演算子-- ---//
	Counter operator--(int)
	{
		Counter x = *this; //デクリメント前の値を保存
		--(*this);		   //前置減分演算子によってデクリメント
		return x;		   //保存していた値を返却
	}
};

#endif