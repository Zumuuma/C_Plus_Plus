//�����ăQ�[���i��Q�ŁF���o�͕��j

#include <iostream>
#include "list0910(kazuate).h"

using namespace std;

//---���͂𑣂�---//
static void prompt()
{
	cout << "�O�`" << max_no << "�̐� : ";
}

//---�𓚂̓���---//
int input()
{
	int val;
	do
	{
		prompt(); //���͂𑣂�
		cin >> val;
	} while (val < 0 || val > max_no);

	return val;
}

//---���s�̊m�F---//
bool confirm_retry()
{
	int cont;
	cout << "������x���܂����H\n"
		 << "<Yes...1/No...0> : ";
	cin >> cont;

	return static_cast<bool>(cont);
}