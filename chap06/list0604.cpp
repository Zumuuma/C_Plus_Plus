//��̒l�̍ő�l�����߂�

#include <iostream>

using namespace std;

//---a,b�̍ő�l��ԋp---//
int max(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
	int a, b;

	cout << "����a : ";
	cin >> a;
	cout << "����b : ";
	cin >> b;

	cout << "�ő�l��" << max(a, b) << "�ł��B\n";
}