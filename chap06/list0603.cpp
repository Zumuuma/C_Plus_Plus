//�O�̐����l�̍ő�l�����߂�i�֐��Łj

#include <iostream>

using namespace std;

//---a,b,c�̍ő�l��ԋp---
int max(int a, int b, int c)
{
	int max = a;
	if (b > max)
	{
		max = b;
	}
	if (c > max)
	{
		max = c;
	}

	return max;
}

int main()
{
	int a, b, c;

	cout << "����a : ";
	cin >> a;
	cout << "����b : ";
	cin >> b;
	cout << "����c : ";
	cin >> c;

	cout << "�ő�l��" << max(a, b, c) << "�ł��B\n";
}