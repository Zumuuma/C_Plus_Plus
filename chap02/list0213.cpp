//��̐����l�̏��������̒l�Ƒ傫�����̒l�����߂ĕ\��

#include <iostream>

using namespace std;

int main()
{
	int a, b;

	cout << "����a : ";
	cin >> a;
	cout << "����b : ";
	cin >> b;

	int min, max; //���������̒l/�傫�����̒l

	if (a < b) //a��b��菬�������
	{
		min = a;
		max = b;
	}
	else //�����łȂ����
	{
		min = b;
		max = a;
	}

	cout << "���������̒l��" << min << "�ł��B\n";
	cout << "�傫�����̒l��" << max << "�ł��B\n";
}