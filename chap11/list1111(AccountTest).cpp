//��s�����N���X�i��T�Łj�̗��p��

#include <iostream>
#include "list1109(Account).h"

using namespace std;

int main()
{
	Account murayama("���R�ʊ�", "12345678", 1000, 1997, 6, 15); //���R����̌���
	Account okada("���c�ށX", "87654321", 200, 1997, 11, 7);	 //���c����̌���

	murayama.withdraw(200); //���R���񂪂Q�O�O�~���낷
	okada.deposit(100);		//���c���񂪂P�O�O�~�a����

	cout << "���R����̌���\n";
	cout << "�������`��" << murayama.name() << '\n';
	cout << "�������`��" << murayama.no() << '\n';
	cout << "�a���c����" << murayama.balance() << "�~\n";
	cout << "�J �� ����" << murayama.opening_date() << '\n';

	cout << '\n';

	cout << "���c����̌���\n";
	cout << "�������`��" << okada.name() << '\n';
	cout << "�����ԍ���" << okada.no() << '\n';
	cout << "�a���c����" << okada.balance() << "�~\n";
	cout << "�J �� ����" << okada.opening_date().year() << "�N"
		 << okada.opening_date().month() << "��"
		 << okada.opening_date().day() << "��\n";
}