//��s�����N���X�i��U�ŁF�w�b�_���j

#ifndef ___Class_Account
#define ___Class_Account

#include <string>
#include "list1112(Date).h"

//=====��s�����N���X=====//
class Account
{
	std::string full_name; //�������`
	std::string number;	   //�����ԍ�
	long crnt_balance;	   //�a���c��
	Date open;			   //�����J�ݓ�

public:
	Account(std::string name, std::string num, long amnt, const Date &op); //�R���X�g���N�^�y�錾�z

	void deposit(long amnt);  //�a����
	void withdraw(long amnt); //���낷

	std::string name() const { return full_name; } //�������`�𒲂ׂ�
	std::string no() const { return number; }	   //�����ԍ��𒲂ׂ�
	long balance() const { return crnt_balance; }  //�a���c���𒲂ׂ�
	Date opening_date() { return open; }		   //�����J�ݓ��𒲂ׂ�
};

#endif