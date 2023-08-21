int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);
int mod(int x, int y);

/**
 * add - adds two number
 * @x: the first number
 * @y: the second number
 * Return: the sum
 */
int add(int x, int y)
{
	return (x + y);
}


/**
 * add - subtractss two number
 * @x: the first number
 * @y: the second number
 * Return: the subtract
 */
int sub(int x, int y)
{
        return (x - y);
}


/**
 * mul - multiplies two number
 * @x: the first number
 * @y: the second number
 * Return: the multiple
 */
int mul(int x, int y)
{
        return (x * y);
}


/**
 * div - devides two number
 * @x: the first number
 * @y: the second number
 * Return: the divident
 */
int div(int x, int y)
{
        return (x / y);
}


/**
 * mod - finds the modulus of two number
 * @x: the first number
 * @y: the second number
 * Return: the modulus
 */
int mod(int x, int y)
{
        return (x % y);
}
