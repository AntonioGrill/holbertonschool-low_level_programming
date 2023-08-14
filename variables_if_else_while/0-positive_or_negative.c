#include <stdlib.h>
#include <time.h>

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0) {
		printf("Es positivo: %d.\n", n);
	} else if (n < 0) {
		printf("Es negativo: %d.\n", n);
	} else {
		printf("Es cero: %d.\n", n);
	}

	return 0;
}
