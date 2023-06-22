
#include <stdio.h>

void sumArrays(int array1[], int array2[], int sumArray[], int size) {
    for (int i = 0; i < size; i++) {
        sumArray[i] = array1[i] + array2[i];
    }
}

int main() {
    int n = 5;
    int arr_a[n];
    int arr_b[n];
    int sumArray[n];

    printf("Enter values for array1: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr_a[i]);
    }

    printf("Enter values for array2: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr_b[i]);
    }

    sumArrays(arr_a, arr_b, sumArray, n);
	printf("Sum Array: ");
	printf("[");
    
    for (int i = 0; i < n; i++) {
        printf("%d , ", sumArray[i]);
    }
    printf("]");
    
    return 0;
}
