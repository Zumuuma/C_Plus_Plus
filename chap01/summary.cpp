//�T���v���E�v���O����

#include <ctime>	//�����̐����ɕK�v
#include <cstdlib>	//�����̐����ɕK�v
#include <string>	//������̗��p�ɕK�v
#include <iostream> //�X�g���[�����o�͂ɕK�v

using namespace std; //using����

int main()
{
	int a;	   //a��int�^�̕ϐ�
	a = 1;	   //����i�������݂̕ϐ��ɒl������j
	int b = 5; //�������i�ϐ��̐������ɒl������j

	//---���������̏���---
	srand(time(NULL));		 //�����̎��ݒ�
	int lucky = rand() % 10; //0~9�̗���

	cout << "�����̃��b�L�[�i���o�[��" << lucky << "�ł��B\n";
	cout << "�Q�Ŋ���������" << lucky / 2 << "�ł��B\n";
	cout << "�Q�Ŋ�������]��" << lucky % 2 << "�ł��B\n";

	//�萔�I�u�W�F�N�g�i�l�������������Ȃ��ϐ��j
	const double PI = 3.14;
	double r;
	cout << "���a : ";
	cin >> r;
	cout << "���a" << r << "�̉~�̖ʐς�"
		 << (PI * r * r) << "�ł��B\n";

	string name; //���O

	cout << "�����O�� : "; //���͂𑣂�
	cin >> name;		   //�ǂݍ��ށi�󔒂͓ǂݔ�΂��j
	cout << "\a����"
			"�ɂ��́I"
		 << name << "����B\n";
}