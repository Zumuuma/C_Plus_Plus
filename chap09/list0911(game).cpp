//�����ăQ�[���i��Q�ŁF�Q�[�����j

#include <ctime>
#include <cstdlib>
#include "list0910(kazuate).h"

using namespace std;

static int answer = 0;

//---������---//
void initialize()
{
	srand(time(NULL));
}

//---���i���Ă�ׂ����j�̍쐬---//
void gen_no()
{
	answer = rand() % (max_no + 1);
}

//---�𓚂̔���---//
int judge(int cand)
{
	if (cand == answer)
	{
		return 0; //����
	}
	else if (cand > answer)
	{
		return 1; //�傫��
	}
	else
	{
		return 2; //������
	}
}