/* take a single digit character of input and produce string of 7 '0' or '1' characters indicating which segments to turn on or off for 7-segment display */
// assume that input is always a digit 0-9
#include <stdio.h>


main()
{
	int digit, i;
	int hex_segments = 0;
	char result[7];
	digit = getchar();
	switch (digit)
	{
		case '0':
			hex_segments = 0x7E;
			break;
		case '1':
			hex_segments = 0x30;
			break;
		case '2':
			hex_segments = 0x6D;
			break;
		case '3':
			hex_segments = 0x79;
			break;
		case '4':
			hex_segments = 0x33;
			break;
		case '5':
			hex_segments = 0x5B;
			break;
		case '6':
			hex_segments = 0x5F;
			break;
		case '7':
			hex_segments = 0x70;
			break;
		case '8':
			hex_segments = 0x7F;
			break;
		case '9':
			hex_segments = 0x7B;
			break;
	}

	//convert hex representation int into binary string
	for (i = 0; i < sizeof(result); ++i)
	{
		char temp;
		int mask = 1 << (6-i);	//the segment to test
		temp = (mask & hex_segments ? '1' : '0');	
		result[i] = temp;
	}
	printf("%s\n", result);
}

