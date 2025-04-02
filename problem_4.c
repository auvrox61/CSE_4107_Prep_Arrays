// Write a function that finds the subarray with the maximum sum (Kadane’s Algorithm).
#include <stdio.h>

int maxSubarraySum(int arr[], int n) {
    int max_sum = arr[0];
    int current_sum = arr[0];

    for (int i = 1; i < n; i++) {
        current_sum = (current_sum + arr[i] > arr[i]) ? current_sum + arr[i] : arr[i];
        max_sum = (current_sum > max_sum) ? current_sum : max_sum;
    }

    return max_sum;
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max_sum = maxSubarraySum(arr, n);
    printf("Maximum subarray sum is: %d\n", max_sum);

    return 0;
}
