//���f���N���XComplex�̗��p��

#include <iostream>
#include "list1209(Complex).h"

using namespace std;

int main()
{
	double re, im;

	cout << "a�̎��� : ";
	cin >> re;
	cout << "a�̋��� : ";
	cin >> im;
	Complex a(re, im);

	cout << "b�̎��� : ";
	cin >> re;
	cout << "b�̋��� : ";
	cin >> im;
	Complex b(re, im);

	Complex c = -a + b;

	b += 2.0;					   //b�Ɂi2.0,0.0�j��������
	c -= Complex(1.0, 1.0);		   //c����i1.0,1.0�j��������
	Complex d(b.imag(), c.real()); //d���ib�̋���,c�̎����j�Ƃ���

	cout << "a = " << a << '\n';
	cout << "b = " << b << '\n';
	cout << "c = " << c << '\n';
	cout << "d = " << d << '\n';
}