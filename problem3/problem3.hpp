#include <iostream>
#include <vector>

class Number
{
public:
    Number(int n);    
    std::vector<int> getFactors(int n);
    int getLargestPrimeFactor();

private:
    int mNumber;
    std::vector<int> mFactors;
    std::vector<int> primeNumbers;
   	

};
