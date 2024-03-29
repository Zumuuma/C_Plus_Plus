//線形探索（第１版）

#include <iostream>

using namespace std;

//---配列aの先頭n個の要素から値keyを線形探索（第１版）---//
int seq_search(int *a, int n, int key)
{
	for (int i = 0; i < n; i++)
	{
		if (*a++ == key)
		{
			return i; //探索成功
		}
	}
	return -1; //探索失敗
}

int main()
{
	int key, idx;
	int x[7];
	int x_size = sizeof(x) / sizeof(x[0]);

	for (int i = 0; i < x_size; i++)
	{
		cout << "x[" << i << "] : ";
		cin >> x[i];
	}

	cout << "探す値は : ";
	cin >> key;

	if ((idx = seq_search(x, x_size, key)) != -1)
	{
		cout << "その値を持つ要素はx[" << idx << "]です。\n";
	}
	else
	{
		cout << "\a見つかりませんでした。\n";
	}
}