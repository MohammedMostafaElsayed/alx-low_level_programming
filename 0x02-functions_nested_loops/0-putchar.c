#include "_putchar"


int main(void)
{
	int i;
	char *x;

	x = "_putchar";
	for (i = 0; i < 8; i++)
	{
		_putchar(x[i]);
	}
	_putchar('\n');

	return (0);

}

