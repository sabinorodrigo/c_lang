#include <stdio.h>

int main() {
	int limit = 1000, count = 0, number = 5;

	while (count <= limit) {
		int multiplyer = number * count;
		printf("%d x %d = %d\n", number, count, multiplyer);
		count++;
	}
	return 0; 
}
