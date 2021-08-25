//��s�����N���X�i��T�ŁF�w�b�_���j

#include <string>
#include "list1105(Date).h"

class Account
{
	std::string full_name; //�������`
	std::string number;	   //�����ԍ�
	long crnt_balance;	   //�a���c��
	Date open;			   //�����J�ݓ�

public:
	Account(std::string name, std::string num, long amnt, int y, int m, int d); //�R���X�g���N�^�y�錾�z

	void deposit(long amnt);  //�a����i�����o�֐��錾�j
	void withdraw(long amnt); //���낷�i�����o�֐��錾�j

	std::string name() const { return full_name; } //�������`�𒲂ׂ�iconst�w�肠��j
	std::string no() const { return number; }	   //�����ԍ��𒲂ׂ�iconst�w�肠��j
	long balance() const { return crnt_balance; }  //�a���c���𒲂ׂ�iconst�w�肠��j
	Date opening_date() const { return open; }	   //�����J�ݓ��𒲂ׂ�iconst�w�肠��j
};