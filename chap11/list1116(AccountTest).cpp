//��s�����N���X�i��U�Łj�̗��p��

#include <iostream>
#include "list1112(Date).h"
#include "list1114(Account).h"

using namespace std;

int main()
{
	Account mayu("�n�Ӗ��F", "123456789", 3948, Date(1994, 3, 26)); //�܂��̌���
	string dw[] = {"��", "��", "��", "��", "��", "��", "�y"};

	cout << "�܂��̌���\n";
	cout << "�������`��" << mayu.name() << '\n';
	cout << "�����ԍ���" << mayu.no() << '\n';
	cout << "�J �� ����" << mayu.balance() << "�~\n";
	cout << "�J �� ����" << mayu.opening_date();
	cout << " (" << dw[mayu.opening_date().day_of_week()] << ") \n";
}