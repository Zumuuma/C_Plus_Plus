//---strlenの実現例A---//

#include <cstddef>

size_t strlen(const char *s)
{
	size_t len = 0; //長さ

	while (*s++)
	{
		len++;
	}

	return len; //size_t型：返却値型と一致
}