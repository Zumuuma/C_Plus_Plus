//�ǂݍ��񂾌��̋G�߂�\��

#include <iostream>

using namespace std;

int main()
{
	int month;

	cout << "�G�߂����߂܂��B\n�����ł��� : ";
	cin >> month;

	if (month >= 3 && month <= 5)
	{
		cout << "����͏t�ł��B\n";
	}
	else if (month >= 6 && month <= 8)
	{
		cout << "����͉Ăł��B\n";
	}
	else if (month >= 9 && month <= 11)
	{
		cout << "����͏H�ł��B\n";
	}
	else if (month == 12 || month == 1 || month == 2)
	{
		cout << "����͓~�ł��B\n";
	}
	else
	{
		cout << "\a����Ȍ��͂���܂���悗\n";
	}
}