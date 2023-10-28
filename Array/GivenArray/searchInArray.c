#include<stdio.h>
int main(void)
{
    int arr[] = {1,2,4,5,3};
    int n = sizeof(arr)/sizeof(0);
    int num;

    printf("\nGiven Array is: ");
    for(int i=0; i<n; i++)
        printf("%d ",arr[i]);

    printf("\nWhich element do you wish to be Found inside the Array: ");
    scanf("%d",&num);
    int i=0;
    for(i=0; i<n; i++)
    {
        if(arr[i] == num)
        {
            printf("\n%d is found in the array at %dth position....",num,i+1);
            break;
        }
    }

    if(i == n)
    {
        printf("\n%d is not found inside the array....",num);
    }
}