//�����ăQ�[���i��P�ŁF�Q�[�����j

#include <ctime>
#include <cstdlib>

using namespace std;

static int answer = 0;
extern int max_no; //�P�Ȃ�y�錾�z

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