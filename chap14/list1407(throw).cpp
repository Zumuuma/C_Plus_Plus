//��O�̑��o�ƕ⑫

#include <new>
#include <iostream>

using namespace std;

//===�I�[�o�[�t���[�N���X===//
class OverFlow
{
};

//---x�̂Q�{��Ԃ�---//
int f(int x)
{
	if (x < 0)
	{
		throw "���������B�l�����ɂȂ��Ă��܂��B\n"; //const char*�^�̗�O�𑗏o
	}
	else if (x > 30000)
	{
		throw OverFlow(); //OverFlow�^�̗�O�𑗏o
	}
	else
	{
		return 2 * x; //��O�͑��o����Ȃ�
	}
}

int main()
{
	int a;
	cout << "���� : ";
	cin >> a;

	try
	{
		int b = f(a);
		cout << "���̐��̂Q�{��" << b << "�ł��B\n";
	}
	catch (const char *str) //������̗�O��⑫
	{
		cout << "\a��O���� : " << str;
	}
	catch (OverFlow) //OverFlow�^�̗�O�͂����ŕ⑫
	{
		cout << "\a�I�[�o�[�t���[���܂����B�v���O�������I�����܂��B\n";
		return 1;
	}
}