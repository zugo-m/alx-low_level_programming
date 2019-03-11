#include <stdlib.h>
#include "dog.h"

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *namecopy, *ownercopy;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	namecopy = malloc(sizeof(*name));
	if (namecopy == NULL)
		return (NULL);
	ownercopy = malloc(sizeof(*owner));
	if (ownercopy == NULL)
		return (NULL);

	_strcpy(namecopy, name);
	_strcpy(ownercopy, owner);

	dog->name = namecopy;
	dog->age = age;
	dog->owner = ownercopy;

	return (dog);
}
