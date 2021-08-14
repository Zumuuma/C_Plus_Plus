//---strlen‚ÌÀŒ»—áB---//

#include <cstddef>

size_t strlen(const char *s)
{
	const char *p = s;

	while (*s)
	{
		s++;
	}

	return s - p; //ptrdiff_tŒ^F•Ô‹p’lŒ^‚Æ•sˆê’v
}