#include <stdio.h>
int main() 
{
    char month[12][15] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"  };

    int number;

    printf("Enter a month number from 1 to 12 : ");
    scanf("%d", &number);

    if (number >= 1 && number <= 12) {
        printf("Month Name is : %s", month[number - 1]);
    } else
     {
        printf("Error In Input\n");
    }

}
