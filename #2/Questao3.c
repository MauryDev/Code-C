
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool IsPrime(int value)
{
    if (value < 2)
    {
        return false;
    }
    if (value <= 3)
    {
        return true;
    }
    auto valuemetade = value / 2;
    for (int i = 2; i <= valuemetade; i++)
    {
        if (value % i == 0)
        {
            return false;
        }
    }
    return true;
}
const char* ToStr(bool v)
{
    return v ? "Primo" : "Nao Primo";
}
int main()
{
    int val = 0;
    while (true)
    {
        printf("Digite o numero: ");
        scanf("%d", &val);
        if (val == -1)
        {
            break;
        }
        bool result = IsPrime(val);
        printf("%i = %s\n", val, ToStr(result));
        
    }
    system("pause");
    return 0;
}
