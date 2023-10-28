#include<stdio.h>
int main(void)
{
    int arr[100],n,pos;

    printf("\nEnter the size of the Array: ");
    scanf("%d",&n);

    printf("\nEnter %d Element into the Array: ",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    
    printf("\nUser Given Array is: ");
    for(int i=0; i<n; i++)
        printf("%d ",arr[i]);

    while (1)
    {
        printf("\nEnter the position to Delete an element: ");
        scanf("%d",&pos);
        if(pos > n)
        {
            printf("\nPlease Give a valid position upto %d",n);
        }
        else
        {
            for(int i=pos-1; i<n; i++)
                arr[i] = arr[i+1];

            printf("\nAfter Deletion: ");
            for(int i=0; i<n-1; i++)
                printf("%d ",arr[i]);
            break;
        }
    }
}