//数当てゲーム（第２版：メイン部）

#include <iostream>
#include "list0910(kazuate).h"

using namespace std;

int max_no = 9; //当てるべき数の最大値

int main()
{
	initialize(); //初期化
	cout << "数当てゲーム開始！\n";

	do
	{
		gen_no(); //問題（当てるべき数）の作成
		int judge_val;
		do
		{
			judge_val = judge(input()); //解答の判定
			if (judge_val == 1)
			{
				cout << "\aもっと小さいですよ。\n";
			}
			else if (judge_val == 2)
			{
				cout << "\aもっと大きいですよ。\n";
			}
		} while (judge_val != 0);
		cout << "正解です。\n";
	} while (confirm_retry());
}