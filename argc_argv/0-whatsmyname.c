#include <stdio.h>

int main(int argc, char *argv[]) {
	/* Verifica si argc es al menos 1 para asegurarse de que argv[0] esté presente. */
	if (argc >= 1) {
		printf("%s\n", argv[0]);
	}

	return 0;
}
