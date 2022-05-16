#include <stdio.h>

int  main() {
	int a, b = 0, count = 0;
	scanf("%d", &a);

	b = a;
	while (1) {

		if (b < 10) {
			b = 10 * b + b;
		}
		else {
			b = (b % 10) * 10 + ((b % 10 + b / 10)) % 10;
		}

		count++;
		if (b == a) break;
	}

	printf("%d", count);
	return 0;

}