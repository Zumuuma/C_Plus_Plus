//��s�����N���X�i��S�ŁF�w�b�_���j

#include <string>

class Account
{
	std::string full_name; //�������`
	std::string number;	   //�����ԍ�
	long crnt_balance;	   //�a���c��

public:
	Account(std::string name, std::string num, long amnt); //�R���X�g���N�^�y�錾�z

	std::string name() { return full_name; } //�������`�𒲂ׂ�
	std::string no() { return number; }		 //�����ԍ��𒲂ׂ�
	long balance() { return crnt_balance; }	 //�a���c���𒲂ׂ�

	void deposit(long amnt);  //�a����y�錾�z
	void withdraw(long amnt); //���낷�y�錾�z
};