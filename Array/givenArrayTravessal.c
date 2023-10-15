#include<stdio.h>
int main(void)
{
    int arr[100] = {2,3,4,5,9};
    int i=0,size=0;
    while(arr[i] != 0)
    {
        size++;
        i++;
    }
    
    // array traverse
    printf("\nElements in Array are: ");
    for(int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
}