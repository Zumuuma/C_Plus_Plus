//�z��̊e�v�f�ɂP�C�Q�C�R�C�S�C�T�������ĕ\���ifor���j

#include <iostream>

using namespace std;

int main()
{
	int a[5]; //int[5]�^�̔z��i�v�f�^��int�^�ŗv�f���T�̔z��j

	for (int i = 0; i < 5; i++)
	{
		a[i] = i + 1;
	}
	for (int i = 0; i < 5; i++)
	{
		cout << "a[" << i << "] = " << a[i] << '\n';
	}
}