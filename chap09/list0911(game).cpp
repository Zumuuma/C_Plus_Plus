//数当てゲーム（第２版：ゲーム部）

#include <ctime>
#include <cstdlib>
#include "list0910(kazuate).h"

using namespace std;

static int answer = 0;

//---初期化---//
void initialize()
{
	srand(time(NULL));
}

//---問題（当てるべき数）の作成---//
void gen_no()
{
	answer = rand() % (max_no + 1);
}

//---解答の判定---//
int judge(int cand)
{
	if (cand == answer)
	{
		return 0; //正解
	}
	else if (cand > answer)
	{
		return 1; //大きい
	}
	else
	{
		return 2; //小さい
	}
}