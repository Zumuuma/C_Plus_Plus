//�ǂݍ��񂾎����l�͂P�O�Ŋ���؂�邩

#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	double x;

	cout << "�����l : ";
	cin >> x;

	if (double m = fmod(x, 10))
	{
		cout << "���̒l�͂P�O�Ŋ���؂�܂���B\n";
		cout << "��]��" << m << "�ł��B\n";
	}
	else
	{
		cout << "���̒l�͂P�O�Ŋ���؂�܂��B\n";
	}
}