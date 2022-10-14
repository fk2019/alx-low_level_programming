#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - return length of string
 * @str: string to check
 *
 * Return: length of string
 */
int _strlen(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}
/**
 * cpy - copies strings to new memory
 * @dest: where to copy
 * @src: string to copy
 *
 * Return: pointer to nre string
 */
char *cpy(char *dest, char *src)
{
	char *p;
	int i;

	p = dest;
	i = 0;
	while (*src != '\0')
	{
		*dest++ = *src++;
		i++;
	}
	*dest = '\0';
	return (p);
}
/**
 * new_dog - creates a new dog
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Return: NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	int len1, len2;

	p = malloc(sizeof(*p));
	if (p == NULL)
		return (NULL);

	len1 = _strlen(name);
	len2 = _strlen(owner);
	p->name = malloc(len1 + 1);
	p->owner = malloc(len2 + 1);
	if (p->name == NULL || p->owner == NULL)
	{
		free(p->name);
		free(p->owner);
		free(p);
		return (NULL);
	}

	p->name = cpy(p->name, name);
	p->age = age;
	p->owner = cpy(p->name, owner);
	return (p);
}
