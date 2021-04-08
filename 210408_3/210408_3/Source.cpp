#include<stdio.h>

void main() {
	int _inumber0 = 0;
	for (int _inumber1 = 0; _inumber1 < 4; _inumber1++) {
		printf("*\n");
		for (int _inumber2 = 2; _inumber2 < 4+_inumber0; _inumber2++) {
			printf("*");
		}
		_inumber0++;
		printf("\n");
	}

	fgetc(stdin);
}