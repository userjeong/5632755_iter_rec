#include<stdio.h>

double factorial_iter(n);
double factorial_rec(n);

int main(void)
{
	double result_iter = factorial_iter(20);
	double result_rec = factorial_rec(20);
	printf("iterative factorial result: %.1lf\n", result_iter);
	printf("Recursive factorial result: %.1lf\n", result_rec);

	return 0;
}

double factorial_iter(n)
{
	double result = 1;
	for (int i = n; i >=1 ; i--)
	{
		result = result * i;
	}

}
double factorial_rec(n)
{
	if (n == 1) return 1;
	else
	{
		return n * factorial_rec(n - 1);
	}
}