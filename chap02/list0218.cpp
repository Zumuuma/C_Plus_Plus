//�ǂݍ��񂾒l�ɉ����ăW�����P���̎��\��

#include <iostream>

using namespace std;

int main()
{
	int hand;

	cout << "���I��ł��������i�O�E�E�E�O�[/�P�E�E�E�`���L/�Q�E�E�E�p�[�j : ";
	cin >> hand;

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