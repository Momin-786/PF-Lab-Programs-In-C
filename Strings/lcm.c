#include <stdio.h>

void EnterNum(int arr[], int n);
void findlcm(int arr[], int n);

int main()
{
    int arr[10];
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    EnterNum(arr, n);
    findlcm(arr, n);

    return 0;
}

void EnterNum(int arr[], int n)
{
    int i;
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void findlcm(int arr[], int n)
{
    int i, max, lcm = 1;
    max = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    int flag = 1;
    while (flag)
    {
        flag = 0;
        for (i = 0; i < n; i++)
        {
            if (max % arr[i] != 0)
            {
                flag = 1;
                break;
            }
        }
        
        if (flag)
        {
            max++;
        }
        else
        {
            lcm = max;
        }
    }
    
    printf("LCM of given array is: %d\n", lcm);
}
