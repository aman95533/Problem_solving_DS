#include <stdio.h>
void insert(int arr[], int *n, int pos, int element) {
    for (int i = *n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = element;
    (*n)++;
}

int main() {
    int arr[100], n, pos, element;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position where you want to insert the new element: ");
    scanf("%d", &pos);
    
    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return 1;
    }

    printf("Enter the element to be inserted: ");
    scanf("%d", &element);

    insert(arr, &n, pos, element);

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
