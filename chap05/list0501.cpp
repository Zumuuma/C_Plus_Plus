//5人の点数を読み込んで合計点・平均点を表示

#include <iostream>

using namespace std;

int main()
{
	int murayama, okada, mogi, mukaichi, shinozaki; //点数
	int sum = 0;									//合計

	cout << "5人の点数の合計点と平均点を求めます。\n";
	cout << "1番の点数 : ";
	cin >> murayama;
	sum += murayama;
	cout << "2番の点数 : ";
	cin >> okada;
	sum += okada;
	cout << "3番の点数 : ";
	cin >> mogi;
	sum += mogi;
	cout << "4番の点数 : ";
	cin >> mukaichi;
	sum += mukaichi;
	cout << "5番の点数 : ";
	cin >> shinozaki;
	sum += shinozaki;

	cout << "合計は" << sum << "点です。\n";
	cout << "平均は" << static_cast<double>(sum) / 5 << "点です。\n";
}