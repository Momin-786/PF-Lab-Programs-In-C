#include <stdio.h>

void findAllSubstringIndexes(const char *str, const char *substr, int *indexes, int *count) {
    int i, j, k;
    int strLen = 0;
    int substrLen = 0;

    // Calculate the length of the input string
    while (str[strLen] != '\0') {
        strLen++;
    }

    // Calculate the length of the substring
    while (substr[substrLen] != '\0') {
        substrLen++;
    }

    *count = 0;

    for (i = 0; i <= strLen - substrLen; i++) {
        j = 0;
        k = i;

        // Check if substring is found at current index
        while (str[k] == substr[j] && substr[j] != '\0') {
            k++;
            j++;
        }

        // If the entire substring is found, store the index
        if (j == substrLen) {
            indexes[*count] = i;
            (*count)++;
        }
    }
}

int main() {
    char str[100];
    char substr[100];
    int indexes[100];
    int count = 0;
    int i;

    printf("Enter a string: ");
    gets(str);

    printf("Enter a substring: ");
    gets(substr);

    findAllSubstringIndexes(str, substr, indexes, &count);

    if (count > 0) {
        printf("Substring found at indexes: ");
        for (i = 0; i < count; i++) {
            printf("%d ", indexes[i]);
        }
        printf("\n");
    } else {
        printf("Substring not found\n");
    }

    return 0;
}
