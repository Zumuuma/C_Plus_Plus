//�z��I�u�W�F�N�g���J��Ԃ����I�ɐ����i��O������}���j

#include <cstddef>
#include <iostream>

using namespace std;

int main()
{
	cout << "�v�f���R�O�O�O�O��double�^�z����J��Ԃ��������܂��B\n";

	while (true)
	{
		double *a = new (nothrow) double[30000]; //�����i��O������}���j

		if (a == NULL)
		{
			cout << "�z��̐����Ɏ��s���܂����̂Ńv���O�����𒆒f���܂��B\n";
			return 1;
		}
	}
}