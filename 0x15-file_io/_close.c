#include "main.h"

/**
 * check - entry point
 * @x: 1 mem
 * @y: 2 mem
 *
 * Return: void
 */
void check(int x, int y)
{
	if (x != 0)
        {
                dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",x);
                exit(100);
        }
	if (y != 0)
        {
                dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",y);
                exit(100);
	}
}
