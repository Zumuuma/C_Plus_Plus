//整数配列クラスIntArray（第１版）の利用例

#define INCLUDE_SELECT 1
#include <iostream>

#if INCLUDE_SELECT == 0
#include "list1401(IntArray).h" //第１版（初期版）
#endif

#if INCLUDE_SELECT == 1
#include "list1403(IntArray).h" //第２版（改良版）
#endif

using namespace std;

int main()
{
	int n;

	cout << "要素数を入力せよ : ";
	cin >> n;

	IntArray x(n); //要素数nの配列

	for (int i = 0; i < x.size(); i++)
	{
		x[i] = i;
	}

	for (int i = 0; i < x.size(); i++)
	{
		cout << "x[" << i << "] = " << x[i] << '\n';
	}
}