#include<stdio.h>

static int global_sum = 0;

int sum(int num)
{
	global_sum += num;
	return global_sum;
}

int main()
{
	printf("%d\n", sum(25));
	printf("%d\n", sum(15));
	printf("%d\n", sum(30));
	return 0;
}
