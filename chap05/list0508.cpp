//配列の要素の並びを反転して表示

#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	const int n = 7; //配列aの要素数
	int a[n];

	srand(time(NULL)); //乱数の種を設定
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 100;
		cout << "a[" << i << "] = " << a[i] << '\n';
	}

	for (int i = 0; i < n / 2; i++)
	{
		int tmp = a[i]; //一時保管用
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}

	cout << "要素の並びを反転しました。\n";
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = " << a[i] << '\n';
	}
}