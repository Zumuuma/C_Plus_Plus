//�ǂݍ��񂾐��������Z�i�X�X�X�X�����͂����Ƌ����I���j

#include <iostream>

using namespace std;

int main()
{
	int n; //���Z
	cout << "���������Z���܂��B\n";
	cout << "�����Z���܂��� : ";
	cin >> n;
	cout << "�X�X�X�X�ŋ����I�����܂��B\n";

	int sum = 0; //���v�l
	for (int i = 0; i < n; i++)
	{
		int t;
		cout << "���� : ";
		cin >> t;
		if (t == 9999)
		{
			goto Exit;
		}
		sum += t;
	}
	cout << "���v��" << sum << "�ł��B\n";

Exit:;
}