//���͂��ꂽ���̋G�߂�\���i�D���Ȃ����J��Ԃ���j

#include <string>
#include <iostream>

using namespace std;

int main()
{
	string retry; //������x�H
	do
	{
		int month;
		cout << "�G�߂����߂܂��B\n�����ł��� : ";
		cin >> month;

		if (month >= 3 && month <= 5) //�R���E�S���E�T��
		{
			cout << "����͏t�ł��B\n";
		}
		else if (month >= 6 && month <= 8) //�U���E�V���E�W��
		{
			cout << "����͉Ăł��B\n";
		}
		else if (month >= 9 && month <= 11) //�X���E�P�O���E�P�P��
		{
			cout << "����͏H�ł��B\n";
		}
		else if (month == 12 || month == 1 || month == 2) //�P�Q���E�P���E�Q��
		{
			cout << "����͓~�ł��B\n";
		}
		else
		{
			cout << "\a����Ȍ��͂���܂���悗\n";
		}

		do
		{
			cout << "������x�H�@Y...Yes/N...No : ";
			cin >> retry;
		} while (retry != "Y" && retry != "y" && retry != "N" && retry != "n");

	} while (retry == "Y" || retry == "y");
}