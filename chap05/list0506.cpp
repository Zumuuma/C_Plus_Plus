//number人の点数を読み込んで合計点・平均点を表示

#include <iostream>

using namespace std;

int main()
{
	const int number = 5; //人数
	int score[number];	  //ninzu人の点数
	int sum = 0;		  //合計

	cout << number << "人の点数の合計点と平均点を求めます。\n";
	for (int i = 0; i < number; i++)
	{
		cout << i + 1 << "番の点数 : ";
		cin >> score[i]; //score[i]を読み込んで
		sum += score[i]; //sumにscore[i]を加える
	}

	cout << "合計は" << sum << "点です。\n";
	cout << "平均は" << static_cast<double>(sum) / number << "点です。\n";
}