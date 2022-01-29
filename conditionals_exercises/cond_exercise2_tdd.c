#include <stdio.h>

float calcular_media(float nota1, float nota2, float nota3, float nota4) {
	float media, menor_nota;

	menor_nota = 10;


	if (nota1 < menor_nota) {
		menor_nota = nota1;
	}
	if (nota2 < menor_nota) {
		menor_nota = nota2;
	}
	if (nota3 < menor_nota) {
		menor_nota = nota3;
	}
	if (nota4 < menor_nota) {
		menor_nota = nota4;
	}

	media = (nota1 + nota2 + nota3 + nota4 - menor_nota) / 3;

	return media;

}

void teste_media(float nota1, float nota2, float nota3, float nota4, float media_esperada) {
	float media, diferenca_media;

	media = calcular_media(nota1, nota2, nota3, nota4);

	diferenca_media = media - media_esperada;

	
		if (diferenca_media > -0.1 && diferenca_media < 0.1) {
			printf("Correto! NOTA 1 = %f NOTA 2 = %f NOTA 3 = %f NOTA 4 = %f MEDIA = %f\n", nota1, nota2, nota3, nota4, media);
	}
		else {
			printf("Incorreto!NOTA 1 = %f NOTA 2 = %f NOTA 3 = %f NOTA 4 = %f MEDIA = %f MEDIA ESPERADA = %f \n", nota1, nota2, nota3, nota4, media, media_esperada);
		}

}

float main() {
	teste_media(5.0, 6.4, 7.6, 3.4, 6.3);
	teste_media(5.0, 6.4, 7.6, 3.4, 6.9);
	teste_media(1.0, 8.9, 7.4, 3.7, 6.6);
}