#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - defines dog structure
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /*_DOG_H_ */
