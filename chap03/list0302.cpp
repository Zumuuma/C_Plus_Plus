//�ǂݍ��񂾒l�ɉ����ăW�����P���̎��\���i�O�C�P�C�Q�݂̂��󂯕t����j

#include <iostream>

using namespace std;

int main()
{
	int hand;

	do
	{
		cout << "���I��ł��������i�O�c�O�[/�P�c�`���L/�Q�c�p�[�j : ";
		cin >> hand;
	} while (hand < 0 || hand > 2);

	switch (hand)
	{
	case 0:
		cout << "�O�[\n";
		break;
	case 1:
		cout << "�`���L\n";
		break;
	case 2:
		cout << "�p�[\n";
		break;
	}
}