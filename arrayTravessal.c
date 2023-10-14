#include<stdio.h>
int main(void)
{
    int arr[50], size;
    printf("Enter the size of the Array: ");
    scanf("%d",&size);
    printf("Enter Elements of Array: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    // array traverse

    printf("Elements in Array are: ");
    for(int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
}