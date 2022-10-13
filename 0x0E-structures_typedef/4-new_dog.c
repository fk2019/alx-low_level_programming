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
	char *na;
	char *ow;

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
	p->age = age;
	for (i = 0; *na != '\0'; i++)
		p->name[i] = *na[i];
	for (j = 0; *ow != '\0'; j++)
		p->owner[j] = *ow[j];
	return (p);
}
