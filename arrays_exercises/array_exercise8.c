/*Fazer um algoritmo que armazene em um vetor os quarenta primeiros números da série de Fibonacci e após
escreva os elementos deste vetor.*/

/*8)Fazer um algoritmo que armazene em um vetor os quarenta primeiros números da série de Fibonacci e após
escreva os elementos deste vetor*/

#include <stdio.h>

int main() {
	int nums[40], i = 0, i2 = 0;

	nums[0] = 0;
	nums[1] = 1;


	for (i = 2; i < 40; i++) {
		nums[i] = nums[i - 1] + nums[i - 2];
	}

	for (i = 0; i < 40; i++) {
		printf("POSITION: %d ELEMENT: %d\n", i, nums[i]);
	}
}