#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/**
 * dog_t - struct dog's typedef
 */
typedef struct dog dog_t;

voi(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
