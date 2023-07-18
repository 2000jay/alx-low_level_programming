#include "main.h"
#include <unistd.h>
/**
 * _putchar -writes the charcter c to stdout
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
