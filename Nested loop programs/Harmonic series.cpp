#include <stdio.h>

int main() 
{
    int n;
    float sum = 0.0;
    int count = 1;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("The harmonic series of %d terms is: ", n);

    while (count <= n) {
        if (count != n) {
            printf("1/%d + ", count);
        } else {
            printf("1/%d", count);
        }
        sum += 1.0 / count;
        count++;
    }

    printf("\nSum of the harmonic series up to %d terms = %f\n", n, sum);

    return 0;
}
