#include "dog.h"
#include <stdlib.h>

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
	int i, j;
	char *na, *ow;

	p = malloc(sizeof(*p));
	if (p == NULL)
		return (NULL);

	i = 0;
	na = name;
	while (*name != '\0')
	{
		i++;
		name++;
	}
	j = 0;
	ow = owner;
	while (*owner != '\0')
	{
		j++;
		owner++;
	}
	p->name = malloc(i + 1);
	p->owner = malloc(j + 1);
	if (p->name == NULL || p->owner == NULL)
	{
		free(p->name);
		free(p->owner);
		free(p);
		return (NULL);
	}

	i = 0;
	while (*na != '\0')
	{
		p->name[i] = *na++;
		i++;
	}
	p->age = age;
	j = 0;
	while (*ow != '\0')
	{
		p->owner[j] = *ow++;
		j++;
	}
	return (p);
}
