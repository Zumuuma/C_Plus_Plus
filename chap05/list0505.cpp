//�z��̊e�v�f���P�C�Q�C�R�C�S�C�T�ŏ��������ĕ\���i�v�f�����v�Z�ɂ���ċ��߂�j

#include <iostream>

using namespace std;

int main()
{
	int a[] = {1, 2, 3, 4, 5};
	int a_size = sizeof(a) / sizeof(a[0]); //�z��a�̗v�f��

	for (int i = 0; i < a_size; i++)
	{
		cout << "a[" << i << "] = " << a[i] << '\n';
	}
	cout << '\n';
	cout << "�z��̗v�f����" << a_size << "�ł��B" << endl;
}