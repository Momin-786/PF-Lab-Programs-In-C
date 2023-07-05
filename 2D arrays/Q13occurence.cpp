//#include<stdio.h>
//# define row 3
//# define col 3 
//int main()
//{
//	int arr[row][col];
//	printf("Enetr 2D Array:");
//	for(int i=0;i<row;i++)
//	{
//		for(int j = 0 ; j< col ; j++)
//		scanf("%d",&arr[i][j]);
//	}
//	for(int i =0 ; i< row; i++)
//	{
//		for(int j=0; j< col ; j++)
//		{
//			printf("Arr[%d][%d]=%d\n",i,j,arr[i][j]);
//		}
//	}
//	for(int i= 0 ; i<row; i++)
//	{
//		printf("\n");
//		for(int j = 0 ; j< col ; j++)
//		{
//			printf("%d\t", arr[i][j]);
//		}
//	}
//}


#include<stdio.h>
# define row 3
# define col 3 
int main()
{
	int arr[row][col]= {{1,2,3},{2,4,5},{5,6,7}};

	for(int i =0 ; i< row; i++)
	{
		for(int j=0; j< col ; j++)
		{
			printf("Arr[%d][%d]=%d\n",i,j,arr[i][j]);
		}
	}
	for(int i= 0 ; i<row; i++)
	{
		printf("\n");
		for(int j = 0 ; j< col ; j++)
		{
			printf("%d\t", arr[i][j]);
		}
	}
}