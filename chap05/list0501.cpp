//5�l�̓_����ǂݍ���ō��v�_�E���ϓ_��\��

#include <iostream>

using namespace std;

int main()
{
	int murayama, okada, mogi, mukaichi, shinozaki; //�_��
	int sum = 0;									//���v

	cout << "5�l�̓_���̍��v�_�ƕ��ϓ_�����߂܂��B\n";
	cout << "1�Ԃ̓_�� : ";
	cin >> murayama;
	sum += murayama;
	cout << "2�Ԃ̓_�� : ";
	cin >> okada;
	sum += okada;
	cout << "3�Ԃ̓_�� : ";
	cin >> mogi;
	sum += mogi;
	cout << "4�Ԃ̓_�� : ";
	cin >> mukaichi;
	sum += mukaichi;
	cout << "5�Ԃ̓_�� : ";
	cin >> shinozaki;
	sum += shinozaki;

	cout << "���v��" << sum << "�_�ł��B\n";
	cout << "���ς�" << static_cast<double>(sum) / 5 << "�_�ł��B\n";
}