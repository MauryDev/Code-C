// Online C compiler to run C program online
#include <stdio.h>
int OperacaoVetor(char op,int* arr,int size)
{
    int ret = size > 0 ? arr[0] : 0;
    switch (op)
    {
        case '+':
            for (int i = 1; i < size ; i++)
                ret += arr[i];
        break;
        case '-':
            for (int i = 1; i < size ; i++)
                ret -= arr[i];
        break;
        case '*':
            for (int i = 1; i < size ; i++)
                ret *= arr[i];
        break;
        case '/':
            for (int i = 1; i < size ; i++)
                ret /= arr[i];
        break;
        
        default:
        ret = 0;
    }
    return ret;
}
int main() {
    int b[] = {2,3,4};
    int result = OperacaoVetor('+',&b[0],3);
    printf("%d",result);

    return 0;
}
