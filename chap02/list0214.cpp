//��̕ϐ��������i���������j�Ƀ\�[�g

#include <iostream>

using namespace std;

int main()
{
	int a, b;

	cout << "�ϐ�a : ";
	cin >> a;
	cout << "�ϐ�b : ";
	cin >> b;

	if (a > b)
	{
		int t = a; //a��b���傫�����
		a = b;
		b = t;
	}

	cout << "a��b�ƂȂ�悤�Ƀ\�[�g���܂����B\n";
	cout << "�ϐ�a��" << a << "�ł��B\n";
	cout << "�ϐ�b��" << b << "�ł��B\n";
}