#include <iostream>

using namespace std;

void merge(int arr[], int left[], int leftSize, int right[], int rightSize)
{
    int i = 0, j = 0, k = 0;

    // Merge left and right sub-arrays into arr
    while (i < leftSize && j < rightSize)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    //copy any remaining elements of left sub-arry
    while (i < leftSize)
    {
        arr[k] = left[i];
        i++;
        k++;
    }

    // Copy any remaining elements of right sub-arry
    while(j < rightSize)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int size)
{
    if (size <= 1)
    {
        return ;
    }

    int mid = size / 2;
    int left[mid];
    int right[size - mid];

    //Copy elements to left sub-array
    for (int i = 0; i < mid; i++)
    {
        left[i] = arr[i];
    }

    //Copy elements to right sub-array
    for (int i = mid; i < size; i++)
    {
        right[i - mid] = arr[i];
    }

    //Recursively sort left and right sub-arrays
    mergeSort(left, mid);
    mergeSort(right, size - mid);

    // Merge the sorted sub-arryas
    merge(arr, left, mid, right, size - mid);

}

int main()
{
    int arr[] = {4, 3, 5, 1, 2, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}