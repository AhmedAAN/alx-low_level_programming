#include "main.h"

/**
 * check_arg_num - check the number of arguments
 * @argc: the number of arguments
 */
void check_arg_num(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * check_file_read - check if the from file exists and can read
 * @check: the return value of open
 * @name: the first argument passed to the file
 * @from: FD of from or -1
 * @to: FD of to o -1
 */
void check_file_read(int check, char *name, int from, int to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", name);
		if (from != -1)
			close(from);
		if (to != -1)
			close(to);
		exit(98);
	}
}

/**
 * check_file_write - check if the to file exists and can write
 * @check: the return value of open
 * @name: the second argument passed to the file
 * @from: FD of from or -1
 * @to: FD of to or -1
 */
void check_file_write(int check, char *name, int from, int to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", name);
		if (from != -1)
			close(from);
		if (to != -1)
			close(to);
		exit(99);
	}
}

/**
 * check_close - check if we can close the FD
 * @check: the return vlaue of close
 * @value: FD number
 */
void check_close(int check, int value)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", value);
		exit(100);
	}
}

/**
 * main - a program that copies the content of a file to another file.
 * @argc: number of arguments passed
 * @argv: array of pointers to the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int from, to, close_from, close_to;
	ssize_t r, w;
	char buffer[1024];
	int oldval;

	check_arg_num(argc);

	oldval = umask(0);
	from = open(argv[1], O_RDONLY);
	check_file_read(from, argv[1], -1, -1);

	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	check_file_write(to, argv[2], from, -1);

	r = 1024;
	while (r == 1024)
	{
		umask(oldval);
		r = read(from, buffer, 1024);
		check_file_read(r, argv[1], from, to);

		w = write(to, buffer, r);
		if (w != r)
		w = -1;
		check_file_write(w, argv[2], from, to);
	}

	close_to = close(to);
	check_close(close_to, to);

	close_from = close(from);
	check_close(close_from, from);


	return (0);
}
