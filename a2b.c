/* take a string of 0s and 1s representing the 7 segments of input and produces the number indicating that pattern of 0s and 1s*/
// assume that input is always a valid string for 0-9

#include <stdio.h>


main()
{
	int digit, mask, i;
	unsigned char hex_segments = 0;
	char c;
	const char *error = "input error: not 0s and 1s";
	for (i = 0; i < 7; ++i)
	{
		mask = 0;
		c = getchar();
		if (c == '0')
			continue;
		else if (c == '1')
		{
			mask = 1 << (6-i);
			hex_segments |= mask;
		}
		else
			printf("%s\n", error);
	}
	printf("%c\n", hex_segments);
}

