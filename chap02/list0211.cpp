//読み込んだ二つの整数値の小さい方の値を表示（その２：条件演算子）

#include <iostream>

using namespace std;

int main()
{
	int a, b;

	cout << "整数a : ";
	cin >> a;
	cout << "整数b : ";
	cin >> b;

	int min = a < b ? a : b; //小さい方の値

	cout << "小さい方の値は" << min << "です。\n";
}