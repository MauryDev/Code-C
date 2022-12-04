

#include <stdio.h>
int Sum(int* arr,int size)
{
    int v = 0;
    for (int i = 0; i< size;i++)
        v += arr[i];
    return v;
}
int Media(int* arr,int size)
{
    return Sum(arr,size) / size;
}
int imprimirMaiorQueMedia(int* arr,int size)
{
    int media = Media(arr,size);
    
    for (int i = 0; i< size;i++)
        if (arr[i] > media)
            printf("%d\n",arr[i]);
}
int main()
{
    
    int array[20];
    
    for (int i = 0; i < 20; i++)
    {
        printf("Digite o numero: ");
        scanf("%d",&array[i]);
    }
    printf("Valores acima da media\n");
    imprimirMaiorQueMedia(&array[0],20);
    return 0;
}
