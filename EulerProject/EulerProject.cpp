#include "pch.h"
#include <iostream>
#include <cmath>

int multipleSum(int in1, int in2);
int fibonacciSum(int max);

int main()
{
	std::cout << "sum: " << multipleSum(3,5) << std::endl;
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

int fibonacciSum(int max)
{
	return 0;
}
