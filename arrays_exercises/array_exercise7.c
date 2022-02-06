/*Fazer um algoritmo que leia cem números reais e escreva o percentual de números que são maiores que a
média dos mesmos.*/

#include <stdio.h>

float main() {
	float nums[100], num_comp = 0, num_media = 0, soma_num = 0, num = 0;
	int i;

	printf("Digite os valores solicitados: ");

	for (i = 0; i < 100; i++) {
		
		scanf_s("%f", &nums[i]);
	
	}

	for (i = 0; i < 100; i++) {

		soma_num = nums[i] + soma_num;

	}

	num_media = soma_num / 100;

	for (i = 0; i < 100; i++) {
		if (nums[i] > num_media) {
			num = num + 1;
		}
	}

	num = num / 100;
	num = num * 100;

	printf("O percentual de números que são maiores que a média dos mesmos é: %f %%", num);
}