// Counting the DUPLICATES of an array

#include <stdio.h>

int main()
{
    int n, count = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements: \n");

    for (int i=0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i=0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                count++;
            }
        }
    }

    printf("Number of duplicates: %d\n", count);
}