//---strlen‚ÌÀŒ»—áA---//

#include <cstddef>

size_t strlen(const char *s)
{
	size_t len = 0; //’·‚³

	while (*s++)
	{
		len++;
	}

	return len; //size_tŒ^F•Ô‹p’lŒ^‚Æˆê’v
}