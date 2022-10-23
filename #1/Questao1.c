// Desabilitar Secure Warning no Visual Studio
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int val1;
	int val2;
	int soma;
	int result;

	printf("Digite o primeiro valor: ");
	scanf("%d", &val1);
	printf("Digite o segundo valor: ");
	scanf("%d", &val2);

	soma = val1 + val2;
	result = soma * 3;

	printf("%d + %d = %d\n", val1,val2,soma);
	printf("%d * 3 = %d\n", soma, result);

	system("pause");
	return 0;
}
