//１からｎまでの和を求める

#include <iostream>

using namespace std;

int main()
{
	int n;

	cout << "１からｎまでの和を求めます。\n";
	do
	{
		cout << "ｎの値 : ";
		cin >> n;
	} while (n <= 0);

	int sum = 0; //合計
	int i = 1;
	while (cout << "i = " << i << " sum = " << sum << '\n', i <= n)
	{
		sum += i; //sumにiを加える
		i++;	  //iをインクリメント
	}
	cout << "１から" << n << "までの和は" << sum << "です。\n";
}