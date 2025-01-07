// printing array in reverse
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements: \n");

    for (int i=0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Printing in reverse: \n");
    for (int i=n-1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}