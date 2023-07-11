//#include<stdio.h>
//
//bool check(int);
//void rec(int, int);
//
//int main()
//{
//    rec(0, 0);
//    return 0;
//}
//
//void rec(int level, int num)
//{
//    if (level == 5)
//    {
//        if (check(num))
//        {
//            printf("%d\n", num);
//        }
//        return;
//    }
//    
//    for (int i = 1; i <= 9; i++)
//    {
//        rec(level + 1, num * 10 + i);
//    }
//}
//
//bool check(int num)
//{
//    int p = 1;
//    int s = 0;
//    int d;
//    
//    while (num > 0)
//    {
//        d = num % 10;
//        p = p * d;
//        s = s + d;
//        num = num / 10;
//    }
//    
//    if (p == 336 && s == 19)
//    {
//        return true;
//    }
//    else
//    {
//        return false;
//    }
//}

//when we take level from user program will be:
#include <stdio.h>

bool check(int);
void rec(int, int, int);

int main()
{
    int numDigits;
    printf("Enter the number of digits: ");
    scanf("%d", &numDigits);

    rec(0, 0, numDigits);
    return 0;
}

void rec(int level, int num, int numDigits)
{
    if (level == numDigits)
    {
        if (check(num))
        {
            printf("%d\n", num);
        }
        return;
    }

    for (int i = 1; i <= 9; i++)
    {
        rec(level + 1, num * 10 + i, numDigits);
    }
}

bool check(int num)
{
    int p = 1;
    int s = 0;
    int d;

    while (num > 0)
    {
        d = num % 10;
        p = p * d;
        s = s + d;
        num = num / 10;
    }

    if (p == 19 && s == 7)
    {
        return true;
    }
    else
    {
        return false;
    }
}
// when we take both sum product and leveell from user:
#include <stdio.h>

bool check(int, int, int);
void rec(int, int, int, int);

int main()
{
    int numDigits; 
    int targetSum; 
    int targetProduct; 

    printf("Enter the number of digits: ");
    scanf("%d", &numDigits);

    printf("Enter the target sum: ");
    scanf("%d", &targetSum);

    printf("Enter the target product: ");
    scanf("%d", &targetProduct);

    rec(0, 0, numDigits, targetSum, targetProduct);
    return 0;
}

void rec(int level, int num, int numDigits, int targetSum, int targetProduct)
{
    if (level == numDigits)
    {
        if (check(num, targetSum, targetProduct))
        {
            printf("%d\n", num);
        }
        return;
    }

    for (int i = 1; i <= 9; i++)
    {
        rec(level + 1, num * 10 + i, numDigits, targetSum, targetProduct);
    }
}

bool check(int num, int targetSum, int targetProduct)
{
    int p = 1;
    int s = 0;
    int d;

    while (num > 0)
    {
        d = num % 10;
        p = p * d;
        s = s + d;
        num = num / 10;
    }

    if (p == targetProduct && s == targetSum)
    {
        return true;
    }
    else
    {
        return false;
    }
}
