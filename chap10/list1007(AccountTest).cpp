//��s�����N���X�i��S�Łj�̗��p��

#include <string>
#include <iostream>
#include "list1005(Account).h"

using namespace std;

//---p���w��Account�̌������i�������`�E�����ԍ��E�a���c���j��\��---//
void print_Account(string title, Account *p)
{
	cout << title
		 << '\"' << p->name() << "\" (" << p->no() << ") " << p->balance() << "�~\n";
}

int main()
{
	Account murayama("���R�ʊ�", "12345678", 1000); //���R����̌���
	Account okada("���c�ށX", "87654321", 200);		//���c����̌���

	murayama.withdraw(200); //���R���񂪂Q�O�O�~���낷
	okada.deposit(100);		//���c���񂪂P�O�O�~�a����

	print_Account("�����R����̌��� : ", &murayama);

	print_Account("�����c����̌��� : ", &okada);
}