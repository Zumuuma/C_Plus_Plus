//���̐����l���O�܂ŃJ�E���g�_�E���i���̂P�j

#include <iostream>

using namespace std;

int main()
{
	int x;

	cout << "�J�E���g�_�E�����܂��B\n";
	do
	{
		cout << "���̐����l : ";
		cin >> x;
	} while (x <= 0);

	while (x >= 0)
	{
		cout << x << "\n"; //x�̒l��\��
		x--;			   //x�̒l���f�N�������g�i�l������炷�j
	}

	cout << "�ϐ�x�̒l : " << x << "\n"; //x�̒l�m�F�p
}