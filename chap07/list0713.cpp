//�z��̑S�v�f�ɂO�����i��Q�Łj

#include <iostream>

using namespace std;

//---�z��p�̐擪n�̗v�f�ɂO�����i��Q�Łj---//
void fill_zero(int *p, int n)
{
	while (n-- > 0)
	{
		*p++ = 0;
	}
}

int main()
{
	int x[5] = {1, 2, 3, 4, 5};
	int x_size = sizeof(x) / sizeof(x[0]); //�z��x�̗v�f��

	fill_zero(x, x_size); //�z��x�̑S�v�f�ɂO����

	cout << "�S�v�f�ɂO�������܂����B\n";

	for (int i = 0; i < x_size; i++)
	{
		cout << "x[" << i << "] = " << x[i] << '\n'; //x[i]�̒l��\��
	}
}