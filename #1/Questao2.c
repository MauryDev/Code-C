// Desabilitar Secure Warning no Visual Studio
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
// Dynamic Average Length
float Average(float* buff,int len)
{
	float sum = 0.0;
	for (size_t i = 0; i < len; i++)
	{
		sum += *(buff++);
	}
	float avg = sum / (float)len;
	return avg;
}
int main()
{
	float nums[3];
	float avg;
	for (size_t i = 0; i < 3; i++)
	{
		printf("Digite o %d. valor: ",i + 1);
		scanf("%f", &nums[i]);
	}
	avg = Average(&nums, 3);
	printf("Media desses valores sao %f", avg);
	return 0;
}
