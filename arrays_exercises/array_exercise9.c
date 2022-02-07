/*9) Fazer um algoritmo que leia quinze número reais, escreva a média destes números e o menor número maior
que a média (o que acontece se todos os números forem iguais?). E*/

#include <stdio.h>

float main() {
	float nums[15], num_media = 0, num_menor = 0, primeiro_num = 1;
	int i;

	printf("Digite uma sequência de 15 números: \n");

	for (i = 0; i < 15; i++) { 
		scanf_s("%f", &nums[i]);
		num_media = nums[i] + num_media;
	}

	num_media = num_media / 15;

	printf("A média dos números informados é: %f\n", num_media);
	
	for (i = 0; i < 15; i++) {


		if (nums[i] > num_media) {

			if (primeiro_num == 1) {

				num_menor = nums[i];
				primeiro_num = 0;
			}

			else {

				if (nums[i] < num_menor) {
					num_menor = nums[i];
				}
			}
		}
	}
	
	if (primeiro_num == 0) {
		printf("O menor número maior que a média é: %f", num_menor);
	}

	else  {
		printf("Não há valor maior que a média dos números.");
	}

}