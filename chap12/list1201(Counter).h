//カウントクラスCounter（第１版）

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

	//---カウントアップ---//
	void increment()
	{
		if (cnt < UINT_MAX) //カウンタの上限はUINT_MAX
		{
			cnt++;
		}
	}

	//---カウントダウン---//
	void decrement()
	{
		if (cnt > 0) //カウンタの下限は０
		{
			cnt--;
		}
	}

	//---カウンタを返却---//
	unsigned value() //cntのゲッタ
	{
		return cnt;
	}
};

#endif