//読み込んだ整数値は１０で割り切れるのか

#include <iostream>

using namespace std;

int main()
{
	int n;

	cout << "整数値 : ";
	cin >> n;

	if (int mod = n % 10)
	{
		cout << "その値は１０で割り切れません。\n";
		cout << "最下位桁は" << mod << "です。\n";
	}
	else
	{
		cout << "その値は１０で割り切れます。\n";
	}
}