//�ǂݍ��񂾐����l�͂P�O�Ŋ���؂��̂�

#include <iostream>

using namespace std;

int main()
{
	int n;

	cout << "�����l : ";
	cin >> n;

	if (int mod = n % 10)
	{
		cout << "���̒l�͂P�O�Ŋ���؂�܂���B\n";
		cout << "�ŉ��ʌ���" << mod << "�ł��B\n";
	}
	else
	{
		cout << "���̒l�͂P�O�Ŋ���؂�܂��B\n";
	}
}