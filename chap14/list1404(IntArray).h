//�����z��N���XIntArray�i��R�ŁF�w�b�_���j

#ifndef ___Class_IntArray
#define ___Class_IntArray

//=====�����z��N���X=====//
class IntArray
{
	int nelem; //�z��̗v�f��
	int *vec;  //�擪�v�f�ւ̃|�C���^

public:
	//---�����I�R���X�g���N�^---//
	explicit IntArray(int size) : nelem(size) { vec = new int[nelem]; }
	//---�R�s�[�R���X�g���N�^�y�錾�z---//
	IntArray(const IntArray &x);
	//---�f�X�g���N�^�y��`�z---//
	~IntArray() { delete[] vec; }
	//---�v�f����Ԃ�---//
	int size() const { return nelem; }
	//---������Z�q=�y��`�z---//
	IntArray &operator=(const IntArray &x);
	//---�Y�����Z�q[]�y��`�z---//
	int &operator[](int i) { return vec[i]; }
	//---const�œY�����Z�q[]�y��`�z---//
	const int &operator[](int i) const { return vec[i]; }
};

#endif