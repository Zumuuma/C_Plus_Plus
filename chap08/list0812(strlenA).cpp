//---strlen�̎�����A---//

#include <cstddef>

size_t strlen(const char *s)
{
	size_t len = 0; //����

	while (*s++)
	{
		len++;
	}

	return len; //size_t�^�F�ԋp�l�^�ƈ�v
}