//�����񂩂�̒��o

#include <sstream>
#include <iostream>

using namespace std;

int main()
{
	string s = "1919/8/10"; //�C���C����b

	istringstream is(s); //������s�ɐڑ����ꂽ��������̓X�g���[��

	int y, m, d; //�N�E���E���̐����l�̊i�[��
	char ch;	 //�X���b�V������ǂ݂��邽�߂̂���

	is >> y >> ch >> m >> ch >> d;				   //�N�E���E���̐����l�Ƌ�؂蕶���𒊏o�q>>�Œ��o
	cout << y << "�N" << m << "��" << d << "��\n"; //�\��
}