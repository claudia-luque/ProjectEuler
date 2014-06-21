#include <iostream>
#include <vector>

bool isEvenNumber(int number) 
{
	if((number % 2) == 0)
	{
		return true;
	}
	else return false;
}

int nthFibonacciNumber() 
{
	int first = 1;
	int second = 2;
	int next = 0;
	int sumOfNumbers = 0;
	int i = 1;
	
	while(next <= 4000000)
	{
		if (i == 1)
		{
			next = 1;
			std::cout<< next << std::endl;
		}
		else
		{
			if(i == 2)
			{
				next = 2;
				std::cout<< next << std::endl;
				
				if(isEvenNumber(next)) 
				{
					sumOfNumbers += next;
					std::cout<< "sum: " << sumOfNumbers <<std::endl;
				}
					
			}
			else
			{
				next = first + second;
				first = second;
		    	second = next;
				std::cout<< next << std::endl;
				
				if(isEvenNumber(next)) 
				{
					sumOfNumbers += next;
					std::cout<< "sum: " << sumOfNumbers <<std::endl;
				}	
			}
		}
		i++;
	}

	return sumOfNumbers;
}

int main()
{
	// Declaring a vector to hold Fibonacci series
	std::vector<int> fibNumbers;
	std::cout << nthFibonacciNumber() << std::endl;
	
	return 0;	
}
