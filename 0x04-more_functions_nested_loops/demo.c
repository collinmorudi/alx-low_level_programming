#include <stdio.h>

int main(void)
{
	int n = 1024;
	int x;
	
	printf("hello");
	while(n >= 10)
	{
		x = n / 10;
		printf("%d", x);
		n /= n;
	}

	return (0);
}
