//�ׂ���l�����߂�

#include <iostream>

using namespace std;

//---x��n���Ԃ�---//
double power(double x, int n);

int main()
{
	double a;
	int b;

	cout << "a��b������߂܂��B\n";
	cout << "����a : ";
	cin >> a;
	cout << "����b : ";
	cin >> b;
	cout << a << "��" << b << "���" << power(a, b) << "�ł��B\n";
}