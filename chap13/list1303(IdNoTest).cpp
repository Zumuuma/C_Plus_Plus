//���ʔԍ��N���XIdNo�i��P�Łj�̗��p��

#include <iostream>
#include "list1301(IdNo).h"

using namespace std;

int main()
{
	IdNo a;	   //���ʔԍ��P��
	IdNo b;	   //���ʔԍ��Q��
	IdNo c[4]; //���ʔԍ��R�ԁ`�U��

	cout << "a�̎��ʔԍ� : " << a.id() << '\n';
	cout << "b�̎��ʔԍ� : " << b.id() << '\n';
	for (int i = 0; i < 4; i++)
	{
		cout << "c[" << i << "]�̎��ʔԍ� : " << c[i].id() << '\n';
	}
}