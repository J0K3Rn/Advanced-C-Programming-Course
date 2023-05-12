#include<stdio.h>

static double local_global = 15.5;
float program_global = 3.99;

static int example()
{
	static float perm_var = 10.10;
	auto int temp = 0;
	return 0;
}


int main()
{
	register int count = 0;
	printf("Hello World!\n");
	return 0;
}
