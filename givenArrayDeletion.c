#include<stdio.h>
int main(void)
{
    int arr[100]={1,2,3,4,5,6};
    int i=0, size=0;
    while (arr[i] != 0)
    {
        size ++;
        i ++;
    }

    printf("\nSize of the Array is: %d", size);
    printf("\nGiven Array is : ");
    for(int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }

    // Deletion from Array at any position

    printf("\nEnter the Position for Delete an Element: ");
    int pos;
    scanf("%d", &pos);

    for(int i=pos-1; i<size; i++)
    {
        arr[i] = arr[i+1];
    }

    size--;
    printf("After The Deletion: ");
    for(int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
}