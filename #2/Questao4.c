#include <stdio.h>
int fibonacci(int n)
{
    if (n < 3)
    {
        return 1;
    } else
    {
        int old1 = 1,old2 = 1;
        int v = 0;
        for (int i = 2; i < n; i++)
        {
            v = old1 + old2;
            old2 = old1;
            old1 = v;
        }
        return v;
    }
}
int main()
{
    int num = 0;
    printf("Digite o valor: ");
    scanf("%d",&num);
    int result = fibonacci(num);
    printf("%d\n",result);

    return 0;
}
