//���邤�N���ǂ����𒲂ׂ�

#include <iostream>
#include <ciso646>

using namespace std;

int main()
{
	int y;

	cout << "�N����͂��� : ";
	cin >> y;

	cout << "���̔N�͂��邤�N";
	if (y % 4 == 0 and y % 100 != 0 or y % 400 == 0)
	{
		cout << "�ł��B\n";
	}
	else
	{
		cout << "�ł͂���܂���B\n";
	}
}