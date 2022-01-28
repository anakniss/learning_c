#include <stdio.h>

float calcular_imc(float peso, float altura) {
	float imc;
	if (altura == 0) {
		return 0;
	}
	imc = peso / (altura * altura);
	return imc;
}

void teste_imc(float peso, float altura, float imc_esperado) {
	float imc, diferenca_imc;

	imc = calcular_imc(peso, altura);
	diferenca_imc = imc - imc_esperado;

	if (diferenca_imc > -0.01 && diferenca_imc < 0.01) {
		printf("Correto! PESO = %f ALTURA = %f IMC = %f\n", peso, altura, imc_esperado);
	}
	else {
		printf("Incorreto! PESO = %f ALTURA = %f IMC = %f Valor esperado: %f\n", peso, altura, imc, imc_esperado);
	}
}
float main() {
	teste_imc(56.0, 1.60, 7);
	teste_imc(0.1, 0.9, 0);
	teste_imc(56.0, 0.0, 0);
	teste_imc(56.0, 1.60, 21.875);
}
