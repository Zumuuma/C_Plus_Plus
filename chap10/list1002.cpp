//��s�����N���X�i��P�Łj�Ƃ��̗��p��

#include <string>
#include <iostream>

using namespace std;

class Account //�N���X���`
{
public:
	string name;   //�������`
	string number; //�����ԍ�
	long balance;  //�a���c��
};

int main()
{
	Account murayama; //���R����̌���
	Account okada;	  //���c����̌���

	murayama.name = "���R�ʊ�";	  //���R����̌������`
	murayama.number = "12345678"; //���R����̌����ԍ�
	murayama.balance = 1000;	  //���R����̗a���c��

	okada.name = "���c�ށX";   //���c����̌������`
	okada.number = "87654321"; //���c����̌����ԍ�
	okada.balance = 200;	   //���c����̗a���c��

	murayama.balance -= 200; //���R���񂪂Q�O�O�~���낷
	okada.balance += 100;	 //���c���񂪂P�O�O�~�a����

	cout << "�����R����̌��� : \"" << murayama.name << "\" (" << murayama.number
		 << ") " << murayama.balance << "�~\n";

	cout << "�����c����̌��� : \"" << okada.name << "\" (" << okada.number
		 << ") " << okada.balance << "�~\n";
}