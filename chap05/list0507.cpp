//�z��̌^�Ɨv�f�^��\��

#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
	int a[5];
	double b[7];

	cout << "�z��a�̌^ : " << typeid(a).name() << '\n';	   //int�̔z��
	cout << "a�̗v�f�^ : " << typeid(a[0]).name() << '\n'; //���̗v�f

	cout << "�z��b�̌^ : " << typeid(b).name() << '\n';	   //double�̔z��
	cout << "b�̗v�f�^ : " << typeid(b[0]).name() << '\n'; //���̗v�f
}