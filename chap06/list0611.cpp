//�ÎZ�g���[�j���O

#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

//---���s�̊m�F---//
bool confirm_retry()
{
	int retry;

	do
	{
		cout << "������x�H<Yes...1/No...0 : >";
		cin >> retry;
	} while (retry != 0 && retry != 1);

	return static_cast<bool>(retry); //bool�^�ɃL���X�g�����l��ԋp
}

int main()
{
	srand(time(NULL));
	cout << "�ÎZ�g���[�j���O�J�n�I�I\n";

	do
	{
		int x = rand() % 900 + 100; //3���̐�
		int y = rand() % 900 + 100; //3���̐�
		int z = rand() % 900 + 100; //3���̐�

		while (true)
		{
			int k;
			cout << x << "+" << y << "+" << z << " = ";
			cin >> k;
			if (k == x + y + z) //�����̏ꍇ
			{
				cout << "�����I�I\n";
				break;
			}
			cout << "\a�Ⴂ�܂����I�I\n";
		}

	} while (confirm_retry());
}