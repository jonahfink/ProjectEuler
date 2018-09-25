#include "pch.h"
#include <iostream>
#include <cmath>

int multipleSum(int in1, int in2);
int evenFibonacciSum(int max);

int main()
{
	std::cout << "multipleSum: " << multipleSum(3,5) << std::endl;
	std::cout << "fibonacciSum: " << evenFibonacciSum(4000000) << std::endl;
}

int multipleSum(int in1, int in2)
{
	int sum = 0;

	for (int x = 0; x < 1000; x++)
	{
		if (x % in1 == 0 || x % in2 == 0)
			sum += x;
	}

	return sum;
}

int evenFibonacciSum(int max)
{
	int fib[max + 2];
	int i;

	fib[0] = 0;
	fib[1] = 1;

	for (i = 2; i <= max; i++)
		fib[i] = fib[i - 1] + fib[i - 2];

	return fib[max];
}
