#include <iostream>
#include <vector>
#include <cmath>

#include "problem3.hpp"

// Initializing
Number::Number(int n)
: mNumber(n)
{
}

// Get the factors of a number
std::vector<int> Number::getFactors(int mNumber)
{
   double squareRootValue = floor(sqrt(static_cast<double>(mNumber)));
   
   // Cheching if
   if(squareRootValue >= 2)
   {
       for(int i = 2; i <= squareRootValue; i++)
       {
           if(mNumber % i == 0)
           {
               mFactors.push_back(i);
               mNumber = mNumber / i;
               getFactors(mNumber);
           }
       }
   }
   else
       primeNumbers.push_back(mNumber);

   return primeNumbers;
}

int Number::getLargestPrimeFactor()
{
    int maxNumber = 0;
    
    for(int i = 0; i < primeNumbers.size() ;i++) 
    {
        maxNumber = primeNumbers[i];
        
        if(maxNumber < primeNumbers[i])
            maxNumber = primeNumbers[i];
    }
    return maxNumber;
}

int main() {
	
    Number obj(5);
    obj.getFactors(12);
    std::cout<<obj.getLargestPrimeFactor()<<std::endl;
	return 0;
}
