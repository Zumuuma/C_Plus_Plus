//�e��̕ϐ���萔�̌^����\��

#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
	char c;
	short h;
	int i;
	long l;

	cout << "�ϐ�c�̌^ : " << typeid(c).name() << '\n';
	cout << "�ϐ�h�̌^ : " << typeid(h).name() << '\n';
	cout << "�ϐ�i�̌^ : " << typeid(i).name() << '\n';
	cout << "�ϐ�l�̌^ : " << typeid(l).name() << '\n';

	cout << "�������e����'A'�̌^   : " << typeid('A').name() << '\n';
	cout << "�������e����100�̌^   : " << typeid(100).name() << '\n';
	cout << "�������e����100U�̌^  : " << typeid(100U).name() << '\n';
	cout << "�������e����100L�̌^  : " << typeid(100L).name() << '\n';
	cout << "�������e����100UL�̌^ : " << typeid(100UL).name() << '\n';
}