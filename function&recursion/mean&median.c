#include <stdio.h>

// Function to calculate the mean
float calculateMean(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (float)sum / size;
}

// Function to calculate the median
float calculateMedian(int arr[], int size) {
    for(int i = 0; i < size-1; i++) {
        for(int j = 0; j < size-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    if (size % 2 == 0) {
        return (arr[size/2 - 1] + arr[size/2]) / 2.0;
    } else {
        return arr[size/2];
    }
}

int main() {
    int arr[5];
    int size = 5;

    printf("Enter 5 numbers: ");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    float mean = calculateMean(arr, size);
    float median = calculateMedian(arr, size);

    printf("Mean: %.2f\n", mean);
    printf("Median: %.2f\n", median);
    return 0;
}
