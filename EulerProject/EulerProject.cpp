#include "pch.h"
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

//int multipleSum(int in1, int in2);
//int evenFibonacciSum(int max);
//int primeFactorization(long long num);

int main()
{
	//std::cout << "multipleSum: " << multipleSum(3,5) << std::endl;
	//std::cout << "fibonacciSum: " << evenFibonacciSum(4000000) << std::endl;
	//std::cout << "primeFactors: " << primeFactorization(600851475143) << std::endl;
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
	std::vector<int> fib;
	int evenSum = 0;

	fib.push_back(0);
	fib.push_back(1);
	std::cout << fib.size();
	for (int i = fib.size(); fib[i-1] <= max; i++)
		fib.push_back( fib[i - 1] + fib[i - 2]);
	for (int x = 0; x < (int)fib.size(); x++)
		if (fib[x] % 2 == 0)
			evenSum += fib[x];
	return evenSum;
}


int primeFactorization(long long  num)
{
	/*
	std::vector<long long> pFac;
	for (long long x = 1; x < sqrt(num); x++)
		if (num % x == 0)
		{
			pFac.push_back(x);
			pFac.push_back(num / x);
		}
	std::sort(pFac.begin(), pFac.end());
	bool notPrime = true;
	for (int x = pFac.size()-1; x > 0; x--)
	{
		for (long long y = 2; y < sqrt(pFac[x]); y++)
			if (pFac[x] % y == 0)
			{
				notPrime = false; 
				break;
			}
		if (notPrime)
			return pFac[x];
		else
			notPrime = true;
	}
  return 0;
	*/
	
	bool primeFactor = true;
	for (long long x = sqrt(num); x > 0; x--)
	{
		if (num % x == 0)
		{
			for (long long y = 2; y < sqrt(x); y++)
			{
				if (x % y == 0)
				{
					primeFactor = false;
					break;
				}
			}
			if (!primeFactor)
			{
				primeFactor = true;
				continue;
			}
			return x;
		}	
	}
	return 0;
	
}
