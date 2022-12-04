
#include <stdio.h>
#include <stdlib.h>
void PrintVector(int* arr,int size)
{
    printf("-- Vector --\n");
    for (int i = 0 ; i < size ; i++)
        printf("%d\n",arr[i]);
    
}
int main()
{
    int size = 0;
    
    int* vector = NULL;
    
    printf("Digite o tamanho do vector: ");
    scanf("%d",&size);
    
    vector = (int*)malloc(size * sizeof(int));
    
    for (int i = 0; i < size ; i++)
    {
        int v = 0;
        printf("Digite o valor: ");
        scanf("%d",&v);
        vector[i] = v;
        
    }
    PrintVector(vector,size);
    free(vector);

    return 0;
}
