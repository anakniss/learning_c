#include <stdio.h>

int calcular_perimetro(int base, int altura) {
	int perim;
	if (base < 0 || altura < 0) {
		return 0;
	}
	perim = (base * 2) + (altura * 2);
	return perim;
	
}

void teste_calcular_perimetro(int base, int altura, int perimetro_esperado){
	int perim;
	perim = calcular_perimetro(base, altura);

	if (perim == perimetro_esperado) {
		printf("CORRETO base = %d altura = %d perímetro = %d\n", base, altura, perimetro_esperado);
	}
	else {
		printf("INCORRETO base = %d altura = %d perímetro = %d ESPERADO: %d \n", base, altura, perim, perimetro_esperado);
	}


}

int main() {
	teste_calcular_perimetro(10, 20, 60);
	teste_calcular_perimetro(5, 3, 16);
	teste_calcular_perimetro(2, 3, 10);
	teste_calcular_perimetro(0, 0, 0);
	teste_calcular_perimetro(-1, 2, 0);
	teste_calcular_perimetro(1, -2, 0);
	teste_calcular_perimetro(0, 1, 2);
	teste_calcular_perimetro(-1, -3, 0);
}
	
