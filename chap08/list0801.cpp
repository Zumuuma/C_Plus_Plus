//�����񃊃e�����̌^�Ƒ傫����\��

#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
	cout << "�������񃊃e����\"ABC\"\n";
	cout << "  �^ : " << typeid("ABC").name()
		 << "  �傫��" << sizeof("ABC") << "\n\n";

	cout << "�������񃊃e����\"\"\n";
	cout << "  �^ : " << typeid("").name()
		 << "  �傫�� : " << sizeof("") << "\n\n";

	cout << "�������񃊃e����\"ABC\\0DEF\"\n";
	cout << "  �^ : " << typeid("ABC\0DEF").name()
		 << "  �傫�� : " << sizeof("ABC\0DEF") << '\n';
}