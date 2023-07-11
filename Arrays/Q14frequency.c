#include <stdio.h>

void findMaxOccurrences(int arr[], int size) {
    int maxNumber = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > maxNumber) {
            maxNumber = arr[i];
        }
    }
    
    int frequency[maxNumber + 1]; 
    

    for (int i = 0; i <= maxNumber; i++) {
        frequency[i] = 0;
    }

    for (int i = 0; i < size; i++) {
        frequency[arr[i]]++;
    }

    printf("Numbers with maximum occurrences:\n");
    for (int i = 0; i < size; i++) {
        if (frequency[arr[i]] > 0) {
            printf("%d = %d\n", arr[i], frequency[arr[i]]);

            frequency[arr[i]] = 0;
        }
    }
}

int main() {
    int arr[5];
    
    printf("Enter 5 numbers in the array:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    
    findMaxOccurrences(arr, 5);
    
}
