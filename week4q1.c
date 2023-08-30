#include <stdio.h>
int c=0;

void merge(int arr[], int l[], int r[], int left_size, int right_size)
{
    int i = 0, j = 0, k = 0;

    while (i < left_size && j < right_size)
    {
        if (l[i] <= r[j])
        {
            c++;
            arr[k] = l[i];
            i++;
        }
        else
        {
            c++;
            arr[k] = r[j];
            j++;
        }
        k++;
    }

    while (i < left_size)
    {
        arr[k] = l[i];
        i++;
        k++;
    }

    while (j < right_size)
    {
        arr[k] = r[j];
        j++;
        k++;
    }
}

void merge_sort(int arr[], int size)
{
    if (size < 2)
    {
        return;
    }

    int mid = size / 2;
    int l[mid], r[size - mid];

    for (int i = 0; i < mid; i++)
    {
        l[i] = arr[i];
    }

    for (int i = mid; i < size; i++)
    {
        r[i - mid] = arr[i];
    }

    merge_sort(l, mid);
    merge_sort(r, size - mid);
    merge(arr, l, r, mid, size - mid);
}

int main()
{
    int arr[] = {23, 65, 21, 76, 46, 89, 45,32};
    int size = sizeof(arr) / sizeof(arr[0]);

    merge_sort(arr, size);

    printf("Sorted array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n the no of comparision are %d",c);
    return 0;
}