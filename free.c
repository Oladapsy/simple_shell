#include "main.h"

/**
 * free_memory_p - Free a pointer
 *
 * @ptr: Pointer to free
 **/
void free_memory_p(void *ptr)
{
	if (ptr != NULL)
	{
		free(ptr);
		ptr = NULL;
	}

	ptr = NULL;
}

/**
 * free_memory_pp - Free a double pointer
 *
 * @ptr: Double pointer to free
 **/
void free_memory_pp(void **ptr)
{
	void **tmp;

	tmp = ptr;
	while (*tmp != NULL)
	{
		free_memory_p(*tmp);
		tmp++;
	}

	free_memory_p(ptr);
}

