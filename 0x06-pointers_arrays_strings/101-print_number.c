/**
 * print_number - A program that prints an integer.
 *
 * @n: This is the input integer.
 *
 * Return: Nothing to return
 */
void print_number(int n)
{
	unsigned int x, y, read;

	if (n < 0)
	{
		_putchar(45);
		x = n * -1;
	}
	else
	{
		x = n;
	}

	y = x;
	read = 1;

	while (y > 9)
	{
		y /= 10;
		read *= 10;
	}

	for (; read >= 1; read /= 10)
	{
		_putchar(((x / read) % 10) + 48);
	}
}
