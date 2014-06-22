#include <iostream>
#include <vector>

class Number
{

private:
    int mNumber;
    std::vector<int> mFactors;
   	
    Number(int n);
    std::vector<int> function getFactors();
    int function getLargestPrimeFactor();
}
