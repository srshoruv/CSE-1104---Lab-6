// Finding the MINIMUM and MAXIMUM of an Array

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Input the elements: \n");

    for (int i=0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int small = arr[0], large = arr[0];

    for (int i=0; i < n; i++)
    {
        if (small > arr[i])
        {
            small = arr[i];
        }

        if (large < arr[i])
        {
            large = arr[i];
        }
    }

    printf("Max = %d\n", large);
    printf("Min = %d\n", small);

    return 0;
}