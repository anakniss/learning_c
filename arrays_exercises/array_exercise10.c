/* 10) Fazer um algoritmo que leia uma quantidade indeterminada de números até que sejam informados dez
números distintos e escreva esses dez números.*/

#include <stdio.h>

int main() {
	int num_indet;
	int num_indet2;
	int quant_itens = 0;
	int i = 0;
	int nums[10];
	int encontrei = 0;

	while (quant_itens < 10) {

		scanf_s("%d", &num_indet);  //2

		encontrei = 0;

		for (i = 0; i < quant_itens; i++) {

			if (num_indet == nums[i]) {

				printf("Este item consta na lista\n");

				encontrei = 1;

			}

		}

		if (encontrei == 0) {

			printf("Este item não consta na lista\n");

			nums[quant_itens] = num_indet;

			quant_itens++;

		}
	}

	for (i = 0; i < 10; i++) {
		
		printf("A lista é: %d\n", nums[i]);
	}
}
