#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * find_num - finds the biggest number
 *
 * @usrn: username
 * @len: length of username
 * Return: the biggest number
 */
int find_num(char *usrn, int len)
{
	int ch_;
	int ch;
	unsigned int rand_num;

	ch_ = *usrn;
	ch = 0;

	while (ch < len)
	{
		if (ch_ < usrn[ch])
			ch_ = usrn[ch];
		ch += 1;
	}

	srand(ch_ ^ 14);
	rand_num = rand();

	return (rand_num & 63);
}

/**
 * multiply_chars - multiplies each char of username
 *
 * @usrn: username
 * @len: length of username
 * Return: multiplied char
 */
int multiply_chars(char *usrn, int len)
{
	int ch_;
	int ch;

	ch_ = ch = 0;

	while (ch < len)
	{
		ch_ = ch_ + usrn[ch] * usrn[ch];
		ch += 1;
	}

	return (((unsigned int)ch_ ^ 239) & 63);
}

/**
 * generate_random - generates a random char
 *
 * @usrn: username
 * Return: a random char
 */
int generate_random(char *usrn)
{
	int ch_;
	int ch;

	ch_ = ch = 0;

	while (ch < *usrn)
	{
		ch_ = rand();
		ch += 1;
	}

	return (((unsigned int)ch_ ^ 229) & 63);
}

/**
 * main - Entry point
 *
 * @argc: arguments count
 * @argv: arguments vector
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char keygen[7];
	int len, ch_, ch;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void)argc;

	for (len = 0; argv[1][len]; len++)
		;
	keygen[0] = ((char *)alph)[(len ^ 59) & 63];

	ch_ = ch = 0;
	while (ch < len)
	{
		ch_ = ch_ + argv[1][ch];
		ch = ch + 1;
	}
	keygen[1] = ((char *)alph)[(ch_ ^ 79) & 63];
	ch_ = 1;
	ch = 0;
	while (ch < len)
	{
		ch_ = argv[1][ch] * ch_;
		ch = ch + 1;
	}
	keygen[2] = ((char *)alph)[(ch_ ^ 85) & 63];
	keygen[3] = ((char *)alph)[find_num(argv[1], len)];
	keygen[4] = ((char *)alph)[multiply_chars(argv[1], len)];
	keygen[5] = ((char *)alph)[generate_random(argv[1])];
	keygen[6] = '\0';
	for (ch_ = 0; keygen[ch_]; ch_++)
		printf("%c", keygen[ch_]);
	return (0);
}
