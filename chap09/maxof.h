//��l�̍ő�l�����߂�֐��e���v���[�g�Ɩ����I�ȓ��ꉻ

#include <cstring>

//---a,b�̑傫�����̒l�����߂�---//
template <class Type>
Type maxof(Type a, Type b)
{
	return a > b ? a : b;
}

//---a,b�̑傫�����̒l�����߂�iconst char*�^�̓��ꉻ�j---//
template <>
const char *maxof<const char *>(const char *a, const char *b)
{
	return std::strcmp(a, b) > 0 ? a : b;
}