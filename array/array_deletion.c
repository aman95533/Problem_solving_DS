#include <stdio.h>
void deleteElement(int arr[], int *n, int pos) {
    if (pos >= *n || pos < 0) {
        printf("Invalid position!\n");
        return;
    }
    for (int i = pos; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
}

int main() {
    int arr[100], n, pos;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of the element to be deleted: ");
    scanf("%d", &pos);

    deleteElement(arr, &n, pos);

    printf("Array after deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
