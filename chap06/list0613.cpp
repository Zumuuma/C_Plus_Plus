//�������������̘_���ρB�_���a�E�r���I�_���a�E�P�̕␔��\��

/*#include <iostream>

using namespace std;

//---����x���́h�P�h�ł���r�b�g�������߂�---//
int count_bits(unsigned x)
{
	int bits = 0;
	while (x)
	{
		if (x & 1U)
		{
			bits++;
		}
		x >>= 1;
	}

	return bits;
}

//---int�^/unsigned�^�̃r�b�g�������߂�---//
int int_bits()
{
	return count_bits(~0U);
}

//---unsigned�^�̃r�b�g�\����\��---//
void print_bits(unsigned x)
{
	for (int i = int_bits() - 1; i >= 0; i--)
	{
		cout << ((x >> i) & 1U ? '1' : '0');
	}
}

int main()
{
	unsigned a, b;

	cout << "�񕉂̐��������͂��� : \n";
	cout << "a : ";
	cin >> a;
	cout << "b : ";
	cin >> b;

	cout << "a     = ";
	print_bits(a);
	cout << '\n';
	cout << "b     = ";
	print_bits(b);
	cout << '\n';
	cout << "a & b = ";
	print_bits(a & b); //�_����
	cout << '\n';
	cout << "a | b = ";
	print_bits(a | b); //�_���a
	cout << '\n';
	cout << "a ^ b = ";
	print_bits(a ^ b); //�_����
	cout << '\n';
	cout << "~a    = ";
	print_bits(~a); //�P�̕␔
	cout << '\n';
	cout << "~b    = ";
	print_bits(~b); //�P�̕␔
	cout << '\n';
}*/

//numeric_limits�N���X�e���v���[�g���g��ver

#include <iostream>
#include <limits>

using namespace std;

//---unsigned�^�̃r�b�g�\����\��---//
void print_bits(unsigned x)
{
	for (int i = numeric_limits<unsigned>::digits - 1; i >= 0; i--)
	{
		cout << ((x >> i) & 1U ? '1' : '0');
	}
}

int main()
{
	unsigned a, b;

	cout << "�񕉂̐��������͂��� : \n";
	cout << "a : ";
	cin >> a;
	cout << "b : ";
	cin >> b;

	cout << "a     = ";
	print_bits(a);
	cout << '\n';
	cout << "b     = ";
	print_bits(b);
	cout << '\n';
	cout << "a & b = ";
	print_bits(a & b); //�_����
	cout << '\n';
	cout << "a | b = ";
	print_bits(a | b); //�_���a
	cout << '\n';
	cout << "a ^ b = ";
	print_bits(a ^ b); //�_����
	cout << '\n';
	cout << "~a    = ";
	print_bits(~a); //�P�̕␔
	cout << '\n';
	cout << "~b    = ";
	print_bits(~b); //�P�̕␔
	cout << '\n';
}