//double�^�̓�����\��

#include <limits>
#include <iostream>

using namespace std;

int main()
{
	cout << "�ŏ��l : " << numeric_limits<double>::min() << '\n';
	cout << "�ő�l : " << numeric_limits<double>::max() << '\n';
	cout << "������ : " << numeric_limits<double>::radix << "�i����"
		 << numeric_limits<double>::digits << "��\n";
	cout << "��  �� : " << numeric_limits<double>::digits10 << '\n';
	cout << "�@�B��  : " << numeric_limits<double>::epsilon() << '\n';
	cout << "�ő�̊ۂߌ덷 : " << numeric_limits<double>::round_error() << '\n';
	cout << "�ۂߗl�� : ";

	switch (numeric_limits<double>::round_style)
	{
	case round_indeterminate:
		cout << "����ł��Ȃ��B\n";
		break;
	case round_toward_zero:
		cout << "�[���Ɍ������Ċۂ߂�B\n";
		break;
	case round_to_nearest:
		cout << "�\���\�ȍł��߂��l�Ɋۂ߂�B\n";
		break;
	case round_toward_infinity:
		cout << "������Ɍ������Ċۂ߂�B\n";
		break;
	case round_toward_neg_infinity:
		cout << "���̖�����Ɍ������Ċۂ߂�B\n";
		break;
	}
}