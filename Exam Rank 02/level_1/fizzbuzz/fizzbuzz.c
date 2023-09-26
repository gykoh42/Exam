#include <unistd.h>

void write_num(int n)
{
	char num;

	num = 0;
	if (n >= 10)
	{
		write_num(n / 10);
		write_num(n % 10);
	}
	else
	{
		num = n + '0';
		write(1, &num, 1);
	}
}

int main()
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 15 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			write_num(i);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}