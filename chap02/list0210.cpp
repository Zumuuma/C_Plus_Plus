//�ǂݍ��񂾓�̐����l�̏��������̒l��\���i���̂P�Fif���j

#include <iostream>

using namespace std;

int main()
{
	int a, b;

	cout << "����a : ";
	cin >> a;
	cout << "����b : ";
	cin >> b;

	int min; //���������̒l
	if (a < b)
	{
		min = a;
	}
	else
	{
		min = b;
	}
	cout << "���������̒l��" << min << "�ł��B\n";
}