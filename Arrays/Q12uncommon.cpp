#include<stdio.h>

void enter(int arr[], int n) {
    printf("Enter %d numbers: ", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

void uncommon(int a[], int b[], int n) {
    printf("Uncommon numbers are: ");
    for (int i = 0; i < n; i++) {
        int flag = 0; 

        for (int j = 0; j < n; j++) {
            if (a[i] == b[j]) {
                flag = 1; 
                break; 
            }
        }

        if (!flag) {
            printf("%d, ", a[i]);
        }
    }
     for (int i = 0; i < n; i++) {
        int flag = 0; 

        for (int j = 0; j < n; j++) {
            if (a[j] == b[i]) {
                flag = 1; 
                break; 
            }
        }

        if (!flag) {
            printf("%d, ", b[i]);
        }
    }
}

int main() {
    int a[5];
    int b[5];
    enter(a, 5);
    enter(b, 5);
    uncommon(a, b, 5);


}
