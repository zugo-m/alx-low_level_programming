#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		printf("%s\n", (d->name == NULL) ? "(nil)" : d->name);
		printf("Age: ");
		if (!d->age)
			printf("(nil)\n");
		else
			printf("%f\n", d->age);
		printf("Owner: ");
		printf("%s\n", (d->owner == NULL) ? "(nil)" : d->owner);
	}
}
