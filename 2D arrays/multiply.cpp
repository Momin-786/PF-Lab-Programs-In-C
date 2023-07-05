#include <stdio.h>

#define row1 3
#define col1 3
#define row2 3
#define col2 3

void input(int arr[][col1]);
void multi(int m1[][col1], int r1, int c1, int m2[][col2], int r2, int c2, int m3[][col2]);

int main()
{
    int mat1[row1][col1];
    int mat2[row2][col2];
    int mat3[row1][col2];

    printf("Enter mat 1:\n");
    input(mat1);

    printf("Enter mat 2:\n");
    input(mat2);

    multi(mat1, row1, col1, mat2, row2, col2, mat3);

    printf("Resultant matrix:\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void input(int arr[][col1])
{
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}

void multi(int m1[][col1], int r1, int c1, int m2[][col2], int r2, int c2, int m3[][col2])
{
    if (c1 != r2)
    {
        printf("Not possible to multiply matrices.\n");
        return;
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            m3[i][j] = 0;
            for (int k = 0; k < c1; k++)
            {
                m3[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
}
