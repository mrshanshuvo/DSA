#include<stdio.h>
int main(void)
{
    int arr[50], size;
    // checking size until find the perfect size
    while (1)
    {
        printf("\nEnter the size of the Array: ");
        scanf("%d",&size);
        if(size <= 50)
        {
            printf("\nEnter Elements of Array: ");
            for(int i=0; i<size; i++)
            {
                scanf("%d",&arr[i]);
            }

            // array traverse

            printf("\nElements in Array are: ");
            for(int i=0; i<size; i++)
            {
                printf("%d ",arr[i]);
            }
            break;
        }
        else
        {
            printf("\nInvalid Size of Array! Please give size of array in-between 1-50!!");
        }
    }
}