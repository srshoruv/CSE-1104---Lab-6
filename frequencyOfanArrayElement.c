// count frequency of each element in an array.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of a array: ");
    scanf("%d", &n);
    int arr[n], freq[10] = {0};
    // 2 3 2 3 2

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    for (int i = 0; i < 10; i++)
    {
        if (freq[i] != 0)
        {
            printf("%d is appeared %d times.\n", i,freq[i]);
        }
        
    }

    return 0;
}