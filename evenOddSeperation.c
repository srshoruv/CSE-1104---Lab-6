// Separating ODD and EVEN numbers of an Array

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    int odd[n];
    int even[n];
    int o_count = 0, e_count = 0;

    printf("Scanning the elements: \n");

    for (int i=0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            even[e_count++] = arr[i];
        }
        else
        {
            odd[o_count++] = arr[i];
        }
    }
    printf("Printing odds:\n");
    for (int i=0; i < o_count; i++)
    {
        printf("%d ", odd[i]);
    }
    printf("\nPrinting Evens:\n");
    for (int i=0; i < e_count; i++)
    {
        printf("%d ", even[i]);
    }
    printf("\n");

    return 0;

}