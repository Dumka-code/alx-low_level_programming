#ifndef MAIN_H_
#define MAIN_H_

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);


/**
 *  * Perror - print Error with putchar.
 *   * Return: Always 0.
 *    */
void Perror(void)
{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
}




#endif /* MAIN_H_ */
