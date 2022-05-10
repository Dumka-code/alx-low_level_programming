#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - check malloc
 * @b: sizeof malloc
 * Return: return a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p = NULL;

	p = malloc(b);

	if (!p)
	{
		exit(98);
	}
	return (p);
<<<<<<< HEAD
}
=======

}
>>>>>>> 279bb78c66a3a562c9b7dce8a596eee8dde7198e
