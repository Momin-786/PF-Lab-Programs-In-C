#include <stdio.h>

void insertInSortedOrder(int arr[], int size, int num) {
    int i = size - 1;
    
    // Find the correct position to insert the number
    while (i >= 0 && arr[i] > num) {
        arr[i + 1] = arr[i];
        i--;
    }
    
    arr[i + 1] = num; // Insert the number at the correct position
}

int main() {
    int size;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size + 1]; // Increase size by 1 to accommodate the new number
    
    printf("Enter the elements of the array in sorted order:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    int num;
    
    printf("Enter the number to insert: ");
    scanf("%d", &num);
    
    insertInSortedOrder(arr, size, num);
    size++; // Increase the size of the array after inserting the number
    
    printf("Array after inserting the number in sorted order:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
