//���ʔԍ��N���XIdNo�i��P�ŁF�w�b�_���j

#ifndef ___Class_IdNo
#define ___Class_IdNo

//=====���ʔԍ��N���X=====//
class IdNo
{
	static int counter; //���Ԃ܂ł̎��ʔԍ���^�����̂�
	int id_no;			//���ʔԍ�

public:
	IdNo(); //�R���X�g���N�^�y�錾�z

	int id() const; //���ʔԍ��𒲂ׂ�y�錾�z
};

#endif