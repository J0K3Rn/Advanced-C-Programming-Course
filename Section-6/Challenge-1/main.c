#include<stdio.h>

int main()
{
	int arr [5];
	arr[0] = 5;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 9;
	arr[4] = 45;
	int total = 0;
	for(int i = 0; i < 5; i++)
	{
		total += arr[i];
	}
	printf("%d\n", total);

	return 0;
}
