//���̐����l��ǂݍ���ŋt����\��

#include <iostream>

using namespace std;

int main()
{
	int x;

	cout << "���̐����l���t����\�����܂��B\n";
	do
	{
		cout << "���̐����l : ";
		cin >> x;
	} while (x <= 0);

	cout << "�t����ǂނ�";
	while (x > 0)
	{
		cout << x % 10; //x�̍ŉ��ʌ���\��
		x /= 10;		//x���P�O�Ŋ���
	}
	cout << "�ł��B\n";
}