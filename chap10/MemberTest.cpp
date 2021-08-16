//---会員クラスの利用例---//

#include <iostream>
#include "Member.h"

using namespace std;

void print(Member *p)
{
	p->print(); //メンバ関数printの呼び出し
}

int main()
{
	Member okada("岡田奈々", 1, 47);	  //コンストラクタの呼び出し
	okada.set_rank(okada.get_rank() + 1); //ランクを１だけアップする
	print(&okada);						  //表示
}