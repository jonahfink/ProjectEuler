#include "pch.h"
#include <iostream>
#include <cmath>
#include <vector>

int multipleSum(int in1, int in2);
// int evenFibonacciSum(int max);
//int primeFactorization(long long int num);
//int getRemainder(long long int num, long long int divisor);

int main()
{
	std::cout << "multipleSum: " << multipleSum(3,5) << std::endl;
	// std::cout << "fibonacciSum: " << evenFibonacciSum(4000000) << std::endl;
	//std::cout << "multipleSum: " << primeFactorization(600851475143) << std::endl;
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
/*
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
*/
/*
int primeFactorization(long long int num)
{
  std::vector <long long int> pFac(num);

  // loop to find factors, store in array
  // loop factors in array to see if prime
  // sort array to find greatest
  //  return 
  //int paramCast = static_cast<int>(num);
  for(long long int x = 0; x <= num; x++)
  {
    if(getRemainder(num, x) == 0)
    {
      pFac.push_back(x);
      std::cout << x << std::endl;
    }
  }

  return 0;
}

int getRemainder(long long int num, long long int divisor)
{
	return (num - divisor * (num / divisor));
}
*/