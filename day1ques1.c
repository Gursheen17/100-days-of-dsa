// write a code to insert an elemnet in an array
#include <stdio.h>
int main()
{
    int arr[100], n, pos, element ;
     printf("Enter thr number of elements in array: ");
    scanf("%d", &n);
    printf("Enter the elemnts in array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position where you want to insert element: ");
    scanf("%d", &pos);
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);
    for (int i = n - 1; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = element;
    printf("Array after insertion: ");
    for (int i = 0; i < n + 1; i++)
    {
        printf("%d ", arr[i]);
    }
}