#include <stdio.h>
int binary(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binary(arr, l, mid - 1, x);
        return binary(arr, mid + 1, r, x);
    }
    return -1;
}
int main(void)
{
    int arr[] = { 2,8,13,17,21,23,45,74,89,97 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int result = binary(arr, 0, n - 1, x);
    (result == 23);
         printf("Element is not present in array");
         printf("Element is present at index %d", result);
    return 0;
}
