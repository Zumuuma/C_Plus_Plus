//�R�s�Q��̂Q�����z��̑S�\���v�f�ɒl��ǂݍ���ŕ\��

#include <iostream>

using namespace std;

int main()
{
	int m[3][2]; //�R�s�Q��̂Q�����z��

	cout << "�e�\���v�f�̒l��������B\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << "m[" << i << "][" << j << "] : ";
			cin >> m[i][j];
		}
	}

	cout << "--------------------\n";

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << "m[" << i << "][" << j << "] : " << m[i][j] << '\n';
		}
	}
}