//二つの整数値の小さい方の値と大きい方の値を求めて表示

#include <iostream>

using namespace std;

int main()
{
	int a, b;

	cout << "整数a : ";
	cin >> a;
	cout << "整数b : ";
	cin >> b;

	int min, max; //小さい方の値/大きい方の値

	if (a < b) //aがbより小さければ
	{
		min = a;
		max = b;
	}
	else //そうでなければ
	{
		min = b;
		max = a;
	}

	cout << "小さい方の値は" << min << "です。\n";
	cout << "大きい方の値は" << max << "です。\n";
}