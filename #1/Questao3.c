// Desabilitar Secure Warning no Visual Studio
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

float Clamp(float value,float min, float max)
{
	return value > max ? max : (value < min ? min : value );
}
int main()
{
	printf("-- Disciplina Matemática --\n");
	
	float p1, p2, p3,resultado;
	printf("Digite a nota da primeira prova (2.0): ");
	scanf("%f", &p1);
	Clamp(p1,0.0, 2.0);

	printf("Digite a nota da segundo prova (3.0): ");
	scanf("%f", &p2);
	Clamp(p1, 0.0, 3.0);

	printf("Digite a nota da terceira prova (5.0): ");
	scanf("%f", &p3);
	Clamp(p1, 0.0, 5.0);

	resultado = p1 + p2 + p3;

	printf("Sua média final: %f", resultado);
	system("pause");
	return 0;
}
