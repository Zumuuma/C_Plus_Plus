//�O�̐����l�������Ƀ\�[�g

#include <iostream>

using namespace std;

//---����x��y�̒l������---//
void swap(int &x, int &y)
{
	int tmp = x;
	x = y;
	y = tmp;
}

//---����a,b,c�������Ƀ\�[�g---//
void sort(int &a, int &b, int &c)
{
	if (a > b)
	{
		swap(a, b);
	}
	if (b > c)
	{
		swap(b, c);
	}
	if (a > b)
	{
		swap(a, b);
	}
}

int main()
{
	int a, b, c;

	cout << "�ϐ�a : ";
	cin >> a;
	cout << "�ϐ�b : ";
	cin >> b;
	cout << "�ϑfc : ";
	cin >> c;

	sort(a, b, c); //a,b,c�������Ƀ\�[�g

	cout << "�ϐ�a,b,c�������ɕ��ёւ��܂����B\n";
	cout << "�ϐ�a�̒l��" << a << "�ł��B\n";
	cout << "�ϐ�b�̒l��" << b << "�ł��B\n";
	cout << "�ϐ�c�̒l��" << c << "�ł��B\n";
}