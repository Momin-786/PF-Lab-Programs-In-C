#include <stdio.h>

void findOccurrences(int arr[], int size) {
    int frequency[size];
    
    
    for (int i = 0; i < size; i++) {
        frequency[i] = 0;
    }
    
    
    for (int i = 0; i < size; i++) {
        frequency[arr[i]]++;
    }
    
    for (int i = 0; i < size; i++) {
        if (frequency[i] > 0) {
            printf("%d occurs %d time(s)\n", i, frequency[i]);
        }
    }
}

int main() {
    int size;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    findOccurrences(arr, size);
    
    return 0;
}
