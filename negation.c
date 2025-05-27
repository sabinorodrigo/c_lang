#include <stdio.h>

int main() {
	int resto, x, eh_pa;
	printf("Type a value: \n");
	scanf("%d", &x);

	resto = (x % 2);
	eh_pa = (resto == 0);

	if (!eh_pa) {
		printf("Impar!\n");
	}

	return 0;
}
