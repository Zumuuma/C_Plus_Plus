//���ؗp�E���ʔԍ��N���XIdNo�̗��p��

#include <iostream>
#include "list1304(VerId).h"

using namespace std;

int main()
{
	VerId a; //���ʔԍ��P��
	VerId b; //���ʔԍ��Q��

	cout << "a�̎��ʔԍ� : " << a.id() << '\n';
	cout << "b�̎��ʔԍ� : " << b.id() << '\n';

	cout << "�������ꂽ�I�u�W�F�N�g�̐� : " << VerId::counter << '\n';
	cout << "�������ꂽ�I�u�W�F�N�g�̐� : " << a.counter << '\n';
	cout << "�������ꂽ�I�u�W�F�N�g�̐� : " << b.counter << '\n';
}