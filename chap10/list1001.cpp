//���R����Ɖ��c����̋�s����

#include <string>
#include <iostream>

using namespace std;

int main()
{
	string murayama_name = "���R�ʊ�";	 //���R����̌������`
	string murayama_number = "12345678"; //���R����̌����ԍ�
	long murayama_balance = 1000;		 //���R����̗a���c��

	string okada_name = "���c�ށX";	  //���c����̌������`
	string okada_number = "87654321"; //���c����̌����ԍ�
	long okada_balance = 200;		  //���c����̗a���c��

	murayama_balance -= 200; //���R���񂪂Q�O�O�~���낷
	okada_balance += 100;	 //���c���񂪂P�O�O�~�a����

	cout << "�����R����̌��� : \"" << murayama_name << "\" (" << murayama_number
		 << ") " << murayama_balance << "�~\n";

	cout << "�����c����̌��� : \"" << okada_name << "\" (" << okada_number
		 << ") " << okada_balance << "�~\n";
}