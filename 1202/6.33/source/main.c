#include<stdio.h>
#include<stdlib.h>

int binarySearch(int a[], int l, int r, int x);

int main()
{
    int a[] = { 2, 3, 4, 10, 40 };
    int n = sizeof(a) / sizeof(a[0]);
    int x = 10;
    int result = binarySearch(a, 0, n - 1, x);
    if (result == -1)
        printf("Element is not present in array");
    else
        printf("Element is present at index %d", result);
    return 0;
}
int binarySearch(int a[], int l, int r, int x)
{
    if (r >= l) 
    {
        int mid = l + (r - l) / 2;

        // If the element is present at the middle
        // itself
        if (a[mid] == x)
            return mid;

        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (a[mid] > x)
            return binarySearch(a, l, mid - 1, x);

        // Else the element can only be present
        // in right subarray
        return binarySearch(a, mid + 1, r, x);
    }

    // We reach here when element is not
    // present in array
    return -1;
}