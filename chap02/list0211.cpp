//�ǂݍ��񂾓�̐����l�̏��������̒l��\���i���̂Q�F�������Z�q�j

#include <iostream>

using namespace std;

int main()
{
	int a, b;

	cout << "����a : ";
	cin >> a;
	cout << "����b : ";
	cin >> b;

	int min = a < b ? a : b; //���������̒l

	cout << "���������̒l��" << min << "�ł��B\n";
}