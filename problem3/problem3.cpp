#include <iostream>

class Number
{

private:
    int number;
	
    std::vector<int> function getFactors();
    int function getLargestPrimeFactor();
}



#include <iostream>
#include <vector>
#include <cmath>

// Initializing
Number::Number(int n)
: mNumber(n)
{
}

// Get the factors of a number
std::vector<int> problem3::getFactors()
{
   double squareRootValue = floor(sqrt(mNumber));
   
   // Cheching if
   if(squareRootValue >= 2) 
   {
       for(int i = 2; i <= squareRootValue; i++)
       {
           if(mNumber % i == 0)
               mFactors = push(i);
           else
               getFactors();
       }      
   }
}

int problem3::getLargestPrimeFactor()
{
        
}


int main() {
	
	return 0;
}
