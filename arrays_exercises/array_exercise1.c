/* 1)  Faça um algoritmo que leia 10 números e escreva na ordem inversa. */

#include <stdio.h>

int main() {
	int nums[10], i;

	for (i = 0; i < 10; i++) {

		scanf_s("%d", &nums[i]);

	}

	for (i = 9; i >= 0 ; i--) {

		printf("%d\n", nums[i]);
	}
}

