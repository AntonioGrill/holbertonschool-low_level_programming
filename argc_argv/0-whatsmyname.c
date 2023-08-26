#include <stdio.h>

int main(int argc, char *argv[]) {
	/* Verifica si argc es mayor que 1 para asegurarse de que haya argumentos adicionales. */
	if (argc > 1) {
		for (int i = 1; i < argc; i++) {
			printf("Argumento %d: %s\n", i, argv[i]);
		}
		else {
		printf("No se proporcionaron argumentos adicionales.\n");
	}
		return (0);
}
