#include <stdio.h>
int fibonacci(int);
int main()
{
	int i,j,n;
	printf("enter the number of terms in fibonacci sequnce:");
	scanf("%d",&n);
	printf("fabonacci sequnce:\n");
	for (i=0;i<n;i++)
	{
		printf("%d",fibonacci(i));
	}
	return 0;
}
int fibonacci(int n)
{
	if (n <= 1)
	{   return n;
	}
	else
	{
		return fibonacci(n-1) +fibonacci(n-2);
	}
}
