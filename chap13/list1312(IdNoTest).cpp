//���ʔԍ��N���XIdNo�i��Q�Łj�̗��p��

#include <iostream>
#include "list1310(IdNo).h"

using namespace std;

int main()
{
	IdNo a; //���ʔԍ��P��
	IdNo b; //���ʔԍ��Q��

	cout << "a�̎��ʔԍ� : " << a.id() << '\n';
	cout << "b�̎��ʔԍ� : " << b.id() << '\n';
	cout << "���݂܂łɗ^�������ʔԍ��̍ő�l : " << IdNo::get_max_id() << '\n';
}