//�������z��̌^�Ɨv�f�^��\��

#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
	int a[5][3];	   //�Q�����z��
	double b[4][2][3]; //�R�����z��

	cout << "�z��a�̌^ : " << typeid(a).name() << '\n';
	cout << "a�̗v�f�^ : " << typeid(a[0]).name() << '\n';
	cout << "�z��b�̌^ : " << typeid(b).name() << '\n';
	cout << "b�̗v�f�^ : " << typeid(b[0]).name() << '\n';
}