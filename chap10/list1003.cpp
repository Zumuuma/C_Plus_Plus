//��s�����N���X�i��Q�Łj�Ƃ��̗��p��

#include <string>
#include <iostream>

using namespace std;

class Account
{
private:
	string full_name;  //�������`
	string number;	   //�����ԍ�
	long crnt_balance; //�a���c��

public:
	//---�R���X�g���N�^---//
	Account(string name, string num, long amnt)
	{
		full_name = name;	 //�������`
		number = num;		 //�����ԍ�
		crnt_balance = amnt; //�a���c��
	}

	//---�������`�𒲂ׂ�---//
	string name()
	{
		return full_name;
	}

	//---�����ԍ��𒲂ׂ�---//
	string no()
	{
		return number;
	}

	//---�a���c���𒲂ׂ�---//
	long balance()
	{
		return crnt_balance;
	}

	//---�a����---//
	void deposit(long amnt)
	{
		crnt_balance += amnt;
	}

	//---���낷---//
	void withdraw(long amnt)
	{
		crnt_balance -= amnt;
	}
};

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