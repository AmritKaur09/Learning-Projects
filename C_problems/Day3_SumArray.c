#include <stdio.h>

int sumArray(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

int main() {
    int arr[5], n = 5;
    printf("Enter 5 numbers: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Sum of array elements: %d\n", sumArray(arr, n));
    return 0;
} 