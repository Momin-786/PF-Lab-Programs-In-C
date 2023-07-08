#include<stdio.h>

void frequency(char str[]);

int main()
{
    char str[100];
    printf("Enter String: ");
    gets(str);
    frequency(str);
    return 0;
}

void frequency(char str[])
{
    int i = 0;
    int fre[256] = {0};

    while (str[i] != '\0')
    {
        fre[str[i]]++;
        i++;
    }

    printf("Frequency is: \n");
    printf("----------------\n");
    for (int i = 0; i < 256; i++)
    {
        if (fre[i] > 0)
        {
            printf("%c : %d\n", i, fre[i]);
        }
    }
}
