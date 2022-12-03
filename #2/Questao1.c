
#include <stdio.h>
#include <stdlib.h>

void PrintisParImpar(int val)
{
    auto v = val & 1;
    printf(v == 0 ? "Par\n" : "Impar\n");
}

int main()
{
   int v1 = 0;

    while (1)
    {
        printf("Digite o numero: ");
        scanf("%d", &v1);
        if (v1 < 0)
        {
            break;
        }
        else
        {
            PrintisParImpar(v1);
        }
    } 
    system("pause");
    return 0;
}
