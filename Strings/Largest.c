# include <stdio.h>
# include <stdlib.h>
# include <time.h>

void initialize(int a[],int size)
{
	srand(time(0));
	
	for (int i=0;i<size;i++)
	{

		a[i] = rand()%100;
		printf ("%d ", a[i]);
	}
}

int largest(int a[],int size)
{
	
	printf("size if %d \n", size);
	int lar = a[0];
	for (int i=0;i<size;i++)
	{
		if (a[i]>lar)
		lar = a[i];
	}
	return lar;
}
main()
{
	int arr[10];
	int size = sizeof(arr)/sizeof(arr[0]);
	initialize(arr,size);
	int lar  = largest(arr,size);
	printf("\nLargest is %d", lar);
}