/*Fazer um algoritmo que leia vinte números inteiros armazenando-os em um vetor, a seguir, troque o
conteúdo da primeira posição do vetor com o conteúdo da décima primeira posição, o conteúdo da segunda
posição com o da décima segunda, e assim, sucessivamente até trocar o conteúdo da décima com o da vigésima
e escreva o vetor após estas modificações. */

#include <stdio.h>
#define QUANT 20

int calculo(int nums[QUANT]) {
	int i, i2, nums_2[10];

	i2 = 0;

	for (i = 0; i < 10; i++) {
		i2 = nums[i];
		nums[i] = nums[i + 10];
		nums[i + 10] = i2;		
	}



}
 
void teste(int num_test, int nums[QUANT], int nums_esperado[QUANT]) {
	calculo(nums);
	int i, correto = 1;

	for (i = 0; i < QUANT; i++) {

		if (nums[i] != nums_esperado[i]) {
			correto = 0;
			printf("No índice %d esperava-se %d mas contém %d\n", i, nums_esperado[i], nums[i]);
		}

	}
	if (correto) {
		printf("O teste %d está CORRETO!\n", num_test);
	}
	else {
		printf("O teste %d está INCORRETO\n", num_test);
	}
}

int main() {
	int nums[QUANT] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
	int nums_esperado[QUANT] = { 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	teste(1, nums, nums_esperado);

    int nums2[QUANT] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int nums_esperado2[QUANT] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
	teste(2, nums2, nums_esperado2);

	int nums3[QUANT] = {111, 26, 13, 14, 18, 16, 35, 18, 19, 20, 1, 2, 3, 48, 5, 6, 36, 8, 98, 10};
	int nums_esperado3[QUANT] = {1, 2, 3, 48, 5, 6, 36, 8, 98, 10, 111, 26, 13, 14, 18, 16, 35, 18, 19, 20};
	teste(3, nums3, nums_esperado3);
}


/*#include <stdio.h>

int main() {
	int var1, var2, chang;

	chang = var1;
	var1 = var2;
	var2 = chang;


}
*/