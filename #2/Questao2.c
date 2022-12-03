
#include <stdio.h>
#include <stdlib.h>
// para inteiro
int Factorial(int v,const char** error)
{
    if (v < 0)
    {
        *error = "Numero Negativo";
        return -1;
    }
    else
    {
        int ret = 1;

        for (int i = 2; i <= v; i++)
        {
            ret *= i;
        }
        // rechamada é mal pratica, então é melhor usar loops
        return ret;
    }

}
// para numeros double
double FactorialD(int v, const char** error)
{
    if (v < 0)
    {
        *error = "Numero Negativo";
        return -1;
    }
    else
    {
        double ret = 1;

        for (int i = 2; i <= v; i++)
        {
            ret *= (double)i;
        }
        // rechamada é mal pratica, então é melhor usar loops
        return ret;
    }

}

int main()
{
    
    int v = 0;
    char txt[2];
    while (1)
    {
        printf("Digite um numero: ");

        scanf("%d", &v);
        const char* errorname = NULL;
        double fac = FactorialD(v, &errorname);

        if (errorname == NULL)
        {
            // Limite do double nao consegue
            printf("Factorial: %lf\n", fac);
        }
        else
        {
            printf("%s\n", errorname);
        }
        printf("Deseja continuar?(S|N): ");
        scanf("%1s", &txt); //somente um caractere e nada mais 
        if (!(txt[0] == 's' || txt[0] == 'S'))
        {
            break;
        }
    }
    

    system("pause");
    return 0;
}
