//�����ăQ�[���i��P�ŁF���C�����j

#include <iostream>

using namespace std;

void initialize();	  //�y�������z�����̎�����݂̎����Ɋ�Â��Đݒ�
void gen_no();		  //�y���̍쐬�z�O�`max_no�̒l�𗐐��Ő���
int judge(int cand);  //�y�𓚂̔���zcand���������ǂ����𔻒�
int input();		  //�y�𓚂̓��́z�O�`max_no�̒l����͂�����
bool confirm_retry(); //�y���s�̊m�F�z�ăQ�[�����s�������m�F

int max_no = 9; //���Ă�ׂ����̍ő�l�y���̂̒�`�z

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