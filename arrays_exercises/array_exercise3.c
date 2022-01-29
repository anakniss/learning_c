/* 3) Fazer um algoritmo que leia trinta números reais armazenando - os em um vetor e após escreva a posição de
cada número menor que zero desse vetor.*/

#include <stdio.h>

int main() {
	float nums[5];
	int i;

	for (i = 0; i < 5; i++){

		scanf_s("%f", &nums[i]);
		
	}
		
	
	for (i = 0; i < 5; i++){
		if (nums[i] < 0) {
			printf("%d\n", i + 1);
		}
	}
}

