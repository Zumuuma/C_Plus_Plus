//�ǂݍ��񂾐��������Z�i�O�����͂��ꂽ��I���j

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
		cout << "�����i�O�ŏI���j : ";
		cin >> t;
		if (t == 0)
		{
			break; //for�����甲���o��
		}
		sum += t;
	}
	cout << "���v��" << sum << "�ł��B\n";
}