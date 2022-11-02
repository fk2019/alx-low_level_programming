#include "main.h"

int get_endianness(void)
{
	char *word;
	char *byte;

	word = "ALX is awesome!";
	byte = word;
	return (byte[0] ? LITTLE_ENDIAN : BIG_ENDIAN);
}
