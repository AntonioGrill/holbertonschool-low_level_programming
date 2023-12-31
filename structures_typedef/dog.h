#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Definición de la estructura dog */
struct dog {
	char *name;
	float age;
	char *owner;
};

int main(void) {
	/* Declarar e inicializar una variable de tipo struct dog */
	struct dog my_dog;

	/* Asignar valores a los miembros de la estructura */
	my_dog.name = strdup("Poppy");  /* strdup se utiliza para asignar dinámicamente memoria para el nombre */
	my_dog.age = 3.5;
	my_dog.owner = strdup("Bob");  /* También asignamos memoria dinámicamente para el propietario */

	/* Verificar si se pudieron asignar dinámicamente las cadenas de caracteres */
	if (my_dog.name == NULL || my_dog.owner == NULL) {
		perror("Error asignando memoria");
		exit(1);
	}

	/* Imprimir la información de la mascota */
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);

	/* Liberar la memoria asignada dinámicamente */
	free(my_dog.name);
	free(my_dog.owner);

	return (0);
}
