#include "main.h"
/**
 * _sighandler - asdasd
 * @singint: asdas
 * Return: Void
 */
void _sighandler(int singint)
{
	if (singint)
		write(STDIN_FILENO, "\n#cisfun$ ", 10);
}
