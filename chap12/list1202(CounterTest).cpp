//�J�E���^�N���XCounter�i��P�Łj�̗��p��

#include <iostream>
#include "list1201(Counter).h"

using namespace std;

int main()
{
	int no;
	Counter x;

	cout << "���݂̃J�E���^ : " << x.value() << '\n';

	cout << "�J�E���g�A�b�v�� : ";
	cin >> no;

	for (int i = 0; i < no; i++)
	{
		x.increment(); //�J�E���g�A�b�v
		cout << x.value() << '\n';
	}

	cout << "�J�E���g�_�E���� : ";
	cin >> no;

	for (int i = 0; i < no; i++)
	{
		x.decrement(); //�J�E���g�_�E��
		cout << x.value() << '\n';
	}
}