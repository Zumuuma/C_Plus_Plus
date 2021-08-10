//警告を発する関数（デフォルト実引数）

#include <iostream>

using namespace std;

//---n回の警報を発する---//
void alerts(int n = 3)
{
	while (n-- > 0)
	{
		cout << '\a';
		_sleep(2500);
	}
}

int main()
{
	alerts();
	cout << "警報！\n";

	_sleep(1000);

	alerts(5);
	cout << "再び警報！\n";
}