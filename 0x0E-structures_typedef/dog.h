#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Hold the name the age and the owner details
 * @name: Name value
 * @age: Age value
 * @owner: Owner value
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - new name for struct dog
 */
typedef struct dog dog_t;





#endif
