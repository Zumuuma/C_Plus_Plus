//�ǂݍ��񂾐��������Z�i���v���P�C�O�O�O�𒴂��Ȃ��͈͂ŉ��Z����j

#include <iostream>

using namespace std;

int main()
{
	int n; //���Z�����
	cout << "���������Z���܂��B\n";
	cout << "�����Z���܂��� : ";
	cin >> n;

	int sum = 0; //���v�l
	for (int i = 0; i < n; i++)
	{
		int t;
		cout << "���� : ";
		cin >> t;
		if (sum + t > 1000)
		{
			cout << "\a���v���P,�O�O�O�𒴂��܂����B\n�Ō�̐��l�͖������܂��B\n";
			break;
		}
		sum += t;
	}
	cout << "���v��" << sum << "�ł��B\n";
}