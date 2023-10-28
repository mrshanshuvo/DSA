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
        if(pos > size || pos <=0)
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
}