//��̈����̒l����������֐��i�ԈႢ�j

#include <iostream>

using namespace std;

//---����x��y�̒l�������i�ԈႢ�j---//
void swap(int x, int y)
{
	int tmp = x;
	x = y;
	y = tmp;
}

int main()
{
	int a, b;

	cout << "�ϐ�a : ";
	cin >> a;
	cout << "�ϐ�b : ";
	cin >> b;

	swap(a, b); //a��b�������H

	cout << "�ϐ�a��b�̒l���������܂����B\n";
	cout << "�ϐ�a�̒l��" << a << "�ł��B\n";
	cout << "�ϐ�b�̒l��" << b << "�ł��B\n";
	cout << "�����ł��Ȃ������l�������c�O�ł���������\n";
}