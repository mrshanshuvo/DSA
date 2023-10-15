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

            printf("\nSize of the Array is: %d",size);
            printf("\nThe existing Array Elements are: ");
            for(int i=0; i<size; i++)
            {
                printf("%d ",arr[i]);
            }

            // insertion at the end of an Array
            int pos,value;
            while (1)
            {
                printf("\nWhere do you want to input the Element ? : ");
                scanf("%d",&pos);
                if(pos > size)
                {
                    printf("\nInvalid Choice of Position! Please ! Keep it under the Size of Array (%d)",size);
                }
                else
                {
                    printf("\nEnter the Data at %d Position: ",pos);
                    scanf("%d", &value);

                    for(int i=size-1; i>=pos-1; i--)
                    {
                        arr[i+1] = arr[i];
                    }
                    arr[pos-1] = value;
                    printf("\nAfter Adding data: ");
                    for(int i=0; i<=size; i++)
                    {
                        printf("%d ",arr[i]);
                    }
                    break;
                }
            }
            break;
        }
        else
        {
            printf("\nInvalid Size of Array! Please give size of array in-between 1-50!!");
        }
    }
}