/*Fazer um algoritmo que leia cem números reais armazenando-os em um vetor. Após desloque todos os
elementos deste vetor uma posição a esquerda, colocando na última posição o elemento que estava na primeira.
Repetir isso até que o maior elemento do vetor fique na primeira posição do mesmo. Ex (com seis elementos):
*/

#include <stdio.h>

int main() {
	int i, i2, i3, nums[10];

	i2 = 0;

	for (i = 0; i < 10; i++) {

		scanf_s("%d", &nums[i]);

	}

	

    for (i3 = 0; i3 < 9; i3++){

		i2 = nums[0];
	
		for (i = 0; i < 9; i++) {
		
		
			nums[i] = nums[i + 1];

		
		}

		nums[9] = i2;

		for (i = 0; i < 10; i++) {

			printf("%d ", nums[i]);

		}

		printf("\n");

	}	

}