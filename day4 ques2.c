#include <stdio.h>

int findMissing(int arr[], int n)
{
    long expectedSum = (long)n * (n + 1) / 2;
    long actualSum = 0;

    for (int i = 0; i < n - 1; i++)
    {
        actualSum += arr[i];
    }

    return (int)(expectedSum - actualSum);
}

int removeElement(int *nums, int numsSize, int val)
{
    int k = 0;

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != val)
        {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
}

int main()
{
    int missingArr[] = {1, 2, 4, 5, 6};
    int n = 6;
    int missing = findMissing(missingArr, n);
    printf("Missing Element: %d\n", missing);

    int removeArr[] = {3, 2, 2, 3, 4, 5};
    int val = 3;
    int size = 6;
    int newSize = removeElement(removeArr, size, val);

    printf("New length: %d\nElements: ", newSize);
    for (int i = 0; i < newSize; i++)
    {
        printf("%d ", removeArr[i]);
    }
    printf("\n");

    return 0;
}