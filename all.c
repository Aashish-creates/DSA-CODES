
#include <stdio.h>
int c = 0;
int merge(int arr[], int temp[], int left, int mid, int right)
{
    int i = left;
    int j = mid;
    int k = left;
    int count = 0;

    while ((i <= mid - 1) && (j <= right))
    {
        if (arr[i] <= arr[j])
        {
            c++;
            temp[k++] = arr[i++];
        }
        else
        {
            c++;
            temp[k++] = arr[j++];
            count += (mid - i);
        }
    }

    while (i <= mid - 1)
    {
        temp[k++] = arr[i++];
    }

    while (j <= right)
    {
        temp[k++] = arr[j++];
    }

    for (i = left; i <= right; i++)
    {
        arr[i] = temp[i];
    }

    return count;
}

int merge_sort(int arr[], int temp[], int left, int right)
{
    int mid, count = 0;

    if (right > left)
    {
        mid = (right + left) / 2;

        count += merge_sort(arr, temp, left, mid);
        count += merge_sort(arr, temp, mid + 1, right);

        count += merge(arr, temp, left, mid + 1, right);
    }

    return count;
}

int main()
{
    int arr[] = {23, 65, 21, 76, 46, 89, 45, 32};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp[n];

    printf("Given array is \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n\n");

    printf("Number of inversions are %d\n", merge_sort(arr, temp, 0, n - 1));

    printf("\nSorted array is \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n\n");

    printf("Number of comparisons are %d\n", c);

    return 0;
}
