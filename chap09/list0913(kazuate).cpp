//�����ăQ�[���i��Q�ŁF���C�����j

#include <iostream>
#include "list0910(kazuate).h"

using namespace std;

int max_no = 9; //���Ă�ׂ����̍ő�l

int main()
{
	initialize(); //������
	cout << "�����ăQ�[���J�n�I\n";

	do
	{
		gen_no(); //���i���Ă�ׂ����j�̍쐬
		int judge_val;
		do
		{
			judge_val = judge(input()); //�𓚂̔���
			if (judge_val == 1)
			{
				cout << "\a�����Ə������ł���B\n";
			}
			else if (judge_val == 2)
			{
				cout << "\a�����Ƒ傫���ł���B\n";
			}
		} while (judge_val != 0);
		cout << "�����ł��B\n";
	} while (confirm_retry());
}