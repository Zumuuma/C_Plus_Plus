//��s�����N���X�i��R�ŁF�����o�֐��̒�`�𕪗��j�Ƃ��̗��p��

#include <string>
#include <iostream>

using namespace std;

class Account
{
	string full_name;  //�������`
	string number;	   //�����ԍ�
	long crnt_balance; //�a���c��

public:
	Account(string name, string num, long amnt); //�R���X�g���N�^�y�錾�z

	string name() { return full_name; }		//�������`�𒲂ׂ�
	string no() { return number; }			//�����ԍ��𒲂ׂ�
	long balance() { return crnt_balance; } //�a���c���𒲂ׂ�

	void deposit(long amnt);  //�a����y�錾�z
	void withdraw(long amnt); //���낷�y�錾�z
};

//---�R���X�g���N�^---//
Account::Account(string name, string num, long amnt)
{
	full_name = name;	 //�������`
	number = num;		 //�����ԍ�
	crnt_balance = amnt; //�a���c��
}

//---�a����(�N���X��`�̊O�Œ�`����Ă���̂ŃC�����C���֐��ł͂Ȃ�)---//
void Account::deposit(long amnt)
{
	crnt_balance += amnt;
}

//---���낷(�N���X��`�̊O�Œ�`����Ă���̂ŃC�����C���֐��ł͂Ȃ�)---//
void Account::withdraw(long amnt)
{
	crnt_balance -= amnt;
}

int main()
{
	Account murayama("���R�ʊ�", "12345678", 1000); //���R����̌���
	Account okada("���c�ށX", "87654321", 200);		//���c����̌���

	murayama.withdraw(200); //���R���񂪂Q�O�O�~���낷
	okada.deposit(100);		//���c���񂪂P�O�O�~�a����

	cout << "�����R����̌��� : \"" << murayama.name() << "\" (" << murayama.no()
		 << ") " << murayama.balance() << "�~\n";

	cout << "�����c����̌��� : \"" << okada.name() << "\" (" << okada.no()
		 << ") " << okada.balance() << "�~\n";
}