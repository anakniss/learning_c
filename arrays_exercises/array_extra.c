/* Extra) Fazer um algoritmo que leia 10 número, depois leia uma quantidade indeterminada de números e diga se esses números constam na lista ou não.*/

#include <stdio.h>

int main() {
	int nums[10];
	int i;
	int num = 0;
	int i2 = 0;
	int encontrei = 0;


	printf("Digite dez números: \n"); 

	for (i = 0; i < 10; i++){

	scanf_s("%d", &nums[i]);
	
	}

	i = 0;

	printf("Digite os números: \n");

	while (num != -1) {

		scanf_s("%d", &num);

		for (i = 0; i < 10; i++) {

			if (nums[i] == num) {

				encontrei = 1;

			}
		}
		\


		if (encontrei == 1){

		printf("Esse número consta na lista\n");

		}

		else {

		printf("Este número não consta na lista\n");

		}

		encontrei = 0;

	}
}