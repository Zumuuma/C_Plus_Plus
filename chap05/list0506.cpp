//number�l�̓_����ǂݍ���ō��v�_�E���ϓ_��\��

#include <iostream>

using namespace std;

int main()
{
	const int number = 5; //�l��
	int score[number];	  //ninzu�l�̓_��
	int sum = 0;		  //���v

	cout << number << "�l�̓_���̍��v�_�ƕ��ϓ_�����߂܂��B\n";
	for (int i = 0; i < number; i++)
	{
		cout << i + 1 << "�Ԃ̓_�� : ";
		cin >> score[i]; //score[i]��ǂݍ����
		sum += score[i]; //sum��score[i]��������
	}

	cout << "���v��" << sum << "�_�ł��B\n";
	cout << "���ς�" << static_cast<double>(sum) / number << "�_�ł��B\n";
}