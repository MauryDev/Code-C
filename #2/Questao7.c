#include <stdio.h>
#include <stdlib.h>


int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
int CalcularVector(char caractere,int* vector,int size)
{
    qsort(vector,size,sizeof(int),cmpfunc);
    if (size <= 0)
    {
        return 0;
    }
    int result = vector[0];

    switch (caractere)
    {
        case '+':
            for (int i = 1; i < size; i++)
                result += vector[i];
        break;
        case '-':
            for (int i = 1; i < size; i++)
                result -= vector[i];
        break;
        case '*':
            for (int i = 1; i < size; i++)
                result *= vector[i];
        break;
        case '/':
            for (int i = 1; i < size; i++)
                result /= vector[i];
        break;
    }
    return result;
}
int main() {
    int vals[] = {5,3,4,10};
    int result = CalcularVector('/',vals,4);
    printf("%d\n",result);
    return 0;
}
