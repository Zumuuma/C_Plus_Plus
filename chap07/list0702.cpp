//�|�C���^�̊�{�i�A�h���X���Z�q&�ƊԐډ��Z�q*�j

#include <iostream>

using namespace std;

int main()
{
	int n = 135;
	cout << "n    : " << n << '\n';
	cout << "&n   : " << &n << "�Ԓn\n";

	int *ptr = &n; //ptr��n���w��
	cout << "ptr  : " << ptr << "�Ԓn\n";
	cout << "*ptr : " << *ptr << '\n';
}